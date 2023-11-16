object udpForm: TudpForm
  Left = 0
  Top = 0
  Caption = 'udpForm'
  ClientHeight = 466
  ClientWidth = 475
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 72
    Top = 40
    Width = 321
    Height = 81
    Alignment = taCenter
    AutoSize = False
    Caption = 'UDP SERVER'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -47
    Font.Name = 'Sitka Banner'
    Font.Style = []
    ParentFont = False
  end
  object closeBTN: TButton
    Left = 112
    Top = 368
    Width = 233
    Height = 73
    Caption = 'Close'
    TabOrder = 0
    OnClick = closeBTNClick
  end
  object portTE: TEdit
    Left = 112
    Top = 184
    Width = 241
    Height = 33
    Alignment = taCenter
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = 'SERVER PORT: 55555'
  end
  object UDPserver: TIdUDPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 55555
      end>
    DefaultPort = 55555
    OnUDPRead = UDPserverUDPRead
    Left = 424
    Top = 72
  end
  object dbConnect: TFDConnection
    Params.Strings = (
      'Database=noxianconnect'
      'User_Name=admin'
      'Password=1234'
      'Port=3308'
      'DriverID=MySQL_driver')
    Connected = True
    LoginPrompt = False
    Left = 216
    Top = 288
  end
  object driver: TFDPhysMySQLDriverLink
    DriverID = 'MySQL_driver'
    VendorLib = 'E:\FAKS\AppC++\V2.4 - Settings do kraja\libmysql.dll'
    Left = 128
    Top = 288
  end
  object pickrateQuery: TFDQuery
    Connection = dbConnect
    SQL.Strings = (
      'SELECT champPlayedID, champPlayed,COUNT(*)'
      'from noxianconnect.usergames'
      'group by champPlayedID'
      'order by COUNT(*) DESC'
      'limit 1')
    Left = 304
    Top = 288
  end
end
