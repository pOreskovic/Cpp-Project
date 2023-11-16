object tcpForm: TtcpForm
  Left = 0
  Top = 0
  Caption = 'TCP SERVER'
  ClientHeight = 362
  ClientWidth = 382
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object serverL: TLabel
    Left = 112
    Top = 48
    Width = 150
    Height = 33
    Caption = 'TCP SERVER'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 128
    Top = 160
    Width = 121
    Height = 13
    Alignment = taCenter
    AutoSize = False
    Caption = 'Server port'
  end
  object portTE: TEdit
    Left = 128
    Top = 133
    Width = 121
    Height = 21
    Alignment = taCenter
    ReadOnly = True
    TabOrder = 0
  end
  object Button1: TButton
    Left = 112
    Top = 216
    Width = 150
    Height = 57
    Caption = 'Close'
    TabOrder = 1
    OnClick = Button1Click
  end
  object server: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 22222
      end>
    DefaultPort = 22222
    OnExecute = serverExecute
    Left = 296
    Top = 48
  end
  object noxianConnect: TFDConnection
    Params.Strings = (
      'Database=noxianconnect'
      'User_Name=admin'
      'Password=1234'
      'Port=3308'
      'DriverID=MySQL_driver')
    Connected = True
    LoginPrompt = False
    Left = 48
    Top = 136
  end
  object driver: TFDPhysMySQLDriverLink
    DriverID = 'MySQL_driver'
    VendorLib = 'E:\FAKS\AppC++\V2.4 - Settings do kraja\libmysql.dll'
    Left = 48
    Top = 72
  end
  object usersTable: TFDTable
    Active = True
    IndexFieldNames = 'id'
    Connection = noxianConnect
    TableName = 'noxianconnect.users'
    Left = 48
    Top = 208
  end
end
