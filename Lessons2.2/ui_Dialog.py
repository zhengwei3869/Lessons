# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'Dialog.ui'
#
# Created by: PyQt5 UI code generator 5.9.2
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_Dialog(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.resize(438, 339)
        self.verticalLayout = QtWidgets.QVBoxLayout(Dialog)
        self.verticalLayout.setContentsMargins(11, 11, 11, 11)
        self.verticalLayout.setSpacing(6)
        self.verticalLayout.setObjectName("verticalLayout")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setSpacing(6)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.chkBoxUnder = QtWidgets.QCheckBox(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.chkBoxUnder.setFont(font)
        self.chkBoxUnder.setObjectName("chkBoxUnder")
        self.horizontalLayout_2.addWidget(self.chkBoxUnder)
        self.chkBoxItalic = QtWidgets.QCheckBox(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.chkBoxItalic.setFont(font)
        self.chkBoxItalic.setObjectName("chkBoxItalic")
        self.horizontalLayout_2.addWidget(self.chkBoxItalic)
        self.chkBoxBold = QtWidgets.QCheckBox(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.chkBoxBold.setFont(font)
        self.chkBoxBold.setObjectName("chkBoxBold")
        self.horizontalLayout_2.addWidget(self.chkBoxBold)
        self.verticalLayout.addLayout(self.horizontalLayout_2)
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_3.setSpacing(6)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.radioBlack = QtWidgets.QRadioButton(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.radioBlack.setFont(font)
        self.radioBlack.setObjectName("radioBlack")
        self.horizontalLayout_3.addWidget(self.radioBlack)
        self.radioRed = QtWidgets.QRadioButton(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.radioRed.setFont(font)
        self.radioRed.setObjectName("radioRed")
        self.horizontalLayout_3.addWidget(self.radioRed)
        self.radioBlue = QtWidgets.QRadioButton(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.radioBlue.setFont(font)
        self.radioBlue.setObjectName("radioBlue")
        self.horizontalLayout_3.addWidget(self.radioBlue)
        self.verticalLayout.addLayout(self.horizontalLayout_3)
        self.textEdit = QtWidgets.QPlainTextEdit(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(18)
        font.setBold(True)
        font.setWeight(75)
        self.textEdit.setFont(font)
        self.textEdit.setObjectName("textEdit")
        self.verticalLayout.addWidget(self.textEdit)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setSpacing(6)
        self.horizontalLayout.setObjectName("horizontalLayout")
        spacerItem = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem)
        self.btnClear = QtWidgets.QPushButton(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.btnClear.setFont(font)
        self.btnClear.setObjectName("btnClear")
        self.horizontalLayout.addWidget(self.btnClear)
        spacerItem1 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem1)
        self.btnOK = QtWidgets.QPushButton(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.btnOK.setFont(font)
        self.btnOK.setObjectName("btnOK")
        self.horizontalLayout.addWidget(self.btnOK)
        self.btnClose = QtWidgets.QPushButton(Dialog)
        font = QtGui.QFont()
        font.setFamily("宋体")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.btnClose.setFont(font)
        self.btnClose.setObjectName("btnClose")
        self.horizontalLayout.addWidget(self.btnClose)
        self.verticalLayout.addLayout(self.horizontalLayout)

        self.retranslateUi(Dialog)
        self.btnOK.clicked.connect(Dialog.accept)
        self.btnClose.clicked.connect(Dialog.close)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Demo2-3信号与槽"))
        self.chkBoxUnder.setText(_translate("Dialog", "Underline"))
        self.chkBoxItalic.setText(_translate("Dialog", "Italic"))
        self.chkBoxBold.setText(_translate("Dialog", "Bold"))
        self.radioBlack.setText(_translate("Dialog", "Black"))
        self.radioRed.setText(_translate("Dialog", "Red"))
        self.radioBlue.setText(_translate("Dialog", "Blue"))
        self.textEdit.setPlainText(_translate("Dialog", "PyQt5 编程指南\n"
"Python 和 Qt"))
        self.btnClear.setText(_translate("Dialog", "清空"))
        self.btnOK.setText(_translate("Dialog", "确定"))
        self.btnClose.setText(_translate("Dialog", "退出"))

