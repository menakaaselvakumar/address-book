#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        pincodeField(new QLineEdit())
{
    addRow("<font color = 'violet'>First Name</font><font color = 'blue'>*</font>", firstNameField);
    addRow("<font color = 'violet'>Last Name</font><font color = 'blue'>*</font>", lastNameField);
    addRow("<font color = 'violet'>Address</font><font color = 'blue'>*</font>", addressField);
    addRow("<font color = 'violet'>Phone Number</font><font color = 'blue'>*</font>", phoneNumberField);
    addRow("<font color = 'violet'>email</font><font color = 'blue'>*</font>", emailField);
    addRow("<font color = 'violet'>pincode</font><font color = 'blue'>*</font>",pincodeField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    pincodeField->setText("");
}

