#include "addserverdialog.h"
#include "ui_addserverdialog.h"
#include "addserverdialogtitle.h"
#include "clickablelabel.h"


AddServerDialog::AddServerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddServerDialog)
{
    ui->setupUi(this);

    this -> m_parent = parent;

    setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint | windowFlags());
    setStyleSheet("background-color: #FFFFFF;");

    int AddServerDialogWidth = geometry().width();

    AddServerDialogTitle *addServerDialogTitle = new AddServerDialogTitle(this);  // 标题栏

    QString strText("<p style=\"line-height:30px;height:40px;color:#fff;font-size:15px;margin-left:15px;\">添加服务器<p>");
    addServerDialogTitle -> setText(strText);
    addServerDialogTitle -> setStyleSheet("background-color: #333541;");
    addServerDialogTitle -> setAlignment(Qt::AlignLeft);
    addServerDialogTitle -> resize(AddServerDialogWidth - 50, 40);
    addServerDialogTitle -> move(0,0);

    ClickableLabel *label_title_close = new ClickableLabel(this);  // 关闭按钮
    label_title_close ->setText("<p style=\"line-height:32px;height:40px;color:#fff;font-size:20px;text-align:center;\"><b>×</b><p>");
    label_title_close ->setStyleSheet("background-color: #333541;");
    label_title_close ->resize(50, 40);
    label_title_close ->move(AddServerDialogWidth - 50, 0);

    connect(label_title_close, SIGNAL(clicked()), this, SLOT(on_label_title_close_click()));

    ui -> OkButton -> setStyleSheet("background-color: #E64545; color: white;");
    ui -> CancelButton -> setStyleSheet("background-color: white; color: #727272;");
    ui -> ServerIP -> setStyleSheet("background-color: #F4F4F4;font-size:17px;");
    ui -> ServerName -> setStyleSheet("background-color: #F4F4F4;font-size:17px;");

    connect(ui -> OkButton, SIGNAL(clicked()), this, SLOT(on_OkButton_click()));
    connect(ui -> CancelButton, SIGNAL(clicked()), this, SLOT(on_CancelButton_click()));
}

AddServerDialog::~AddServerDialog()
{
    delete ui;
}

void AddServerDialog::on_label_title_close_click()
{
    this -> close();
}

void AddServerDialog::on_OkButton_click()
{
    if(ui -> ServerIP -> text().isEmpty()){
        QMessageBox::warning(this, "服务器IP名称为空", "请输入服务器IP！", "返回");
        return;
    }

    if(ui -> ServerName -> text().isEmpty()){
        QMessageBox::warning(this, "服务器名称为空", "请输入服务器名称！", "返回");
        return;
    }

    QString ServerInfo( ui -> ServerName -> text() + "##" + ui -> ServerIP -> text());  // 存放服务器地址


    emit sendServerInfo(ServerInfo);

    this -> close();
}

void AddServerDialog::on_CancelButton_click()
{
    this -> close();
}
