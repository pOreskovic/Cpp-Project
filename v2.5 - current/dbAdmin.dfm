object adminPage: TadminPage
  Left = 0
  Top = 0
  Caption = 'Admin Settings'
  ClientHeight = 667
  ClientWidth = 1312
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object dbLabel: TLabel
    Left = 456
    Top = 90
    Width = 188
    Height = 19
    Caption = 'Choose a database to edit:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 32
    Top = 120
    Width = 833
    Height = 457
    DataSource = currentTable
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object dbChosenCB: TComboBox
    Left = 664
    Top = 90
    Width = 201
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ItemIndex = 0
    ParentFont = False
    ParentShowHint = False
    ShowHint = False
    TabOrder = 1
    Text = 'Users'
    OnChange = dbChosenCBChange
    Items.Strings = (
      'Users'
      'Champions')
  end
  object adminDriver: TFDPhysMySQLDriverLink
    DriverID = 'adminDriver'
    VendorLib = 'E:\FAKS\AppC++\V2.0 - Main pocetak\libmysql.dll'
    Left = 80
    Top = 32
  end
  object ncAdmin: TFDConnection
    Params.Strings = (
      'Database=noxianconnect'
      'User_Name=admin'
      'Password=1234'
      'Port=3308'
      'DriverID=adminDriver')
    Connected = True
    LoginPrompt = False
    Left = 136
    Top = 32
  end
  object adminSql: TFDQuery
    Connection = ncAdmin
    Left = 200
    Top = 32
    object adminSqlid: TFDAutoIncField
      FieldName = 'id'
    end
    object adminSqlusername: TStringField
      FieldName = 'username'
      Required = True
    end
    object adminSqlpassword: TStringField
      FieldName = 'password'
      Required = True
      Size = 150
    end
    object adminSqlfirstName: TStringField
      FieldName = 'firstName'
      Required = True
      Size = 25
    end
    object adminSqllastName: TStringField
      FieldName = 'lastName'
      Required = True
      Size = 30
    end
    object adminSqlemail: TStringField
      FieldName = 'email'
      Required = True
      Size = 40
    end
    object adminSqladmin: TIntegerField
      FieldName = 'admin'
      Required = True
    end
  end
  object currentTable: TDataSource
    DataSet = adminSql
    Left = 280
    Top = 32
  end
end
