##与UI窗体类对应的业务逻辑类
import sys
from PyQt5.QtWidgets import QApplication, QDialog
from ui_Dialog import Ui_Dialog


class QmyDialog(QDialog):
   def __init__(self, parent=None):
      super().__init__(parent)  # 调用父类构造函数，创建窗体
      self.ui = Ui_Dialog()  # 创建UI对象
      self.ui.setupUi(self)  # 构造UI


if __name__ == "__main__":  # 用于当前窗体测试
   app = QApplication(sys.argv)  # 创建GUI应用程序
   form = QmyDialog()  # 创建窗体
   form.show()
   sys.exit(app.exec_())
