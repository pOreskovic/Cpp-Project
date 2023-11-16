object adminPage: TadminPage
  Left = 0
  Top = 0
  Width = 1920
  Height = 1100
  HorzScrollBar.Smooth = True
  HorzScrollBar.Tracking = True
  VertScrollBar.Smooth = True
  VertScrollBar.Tracking = True
  AutoScroll = True
  Caption = 'Admin Settings'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  WindowState = wsMaximized
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object helloAdmin: TLabel
    Left = 568
    Top = 80
    Width = 849
    Height = 83
    Alignment = taCenter
    AutoSize = False
    Caption = 'Admin Settings'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -67
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Games: TGroupBox
    Left = 976
    Top = 217
    Width = 857
    Height = 405
    Caption = 'Games'
    TabOrder = 0
    object Label13: TLabel
      Left = 49
      Top = 346
      Width = 32
      Height = 13
      Caption = 'userID'
      FocusControl = DBEdit12
    end
    object Label15: TLabel
      Left = 216
      Top = 346
      Width = 17
      Height = 13
      Caption = 'Kills'
      FocusControl = DBEdit14
    end
    object Label16: TLabel
      Left = 295
      Top = 346
      Width = 34
      Height = 13
      Caption = 'Deaths'
      FocusControl = DBEdit15
    end
    object Label17: TLabel
      Left = 368
      Top = 346
      Width = 33
      Height = 13
      Caption = 'Assists'
      FocusControl = DBEdit16
    end
    object Label18: TLabel
      Left = 459
      Top = 346
      Width = 22
      Height = 13
      Caption = 'Won'
      FocusControl = DBEdit17
    end
    object Label23: TLabel
      Left = 120
      Top = 348
      Width = 37
      Height = 13
      Caption = 'gameID'
      FocusControl = DBEdit22
    end
    object DBGrid1: TDBGrid
      Left = 18
      Top = 24
      Width = 729
      Height = 310
      DataSource = gamesDS
      ReadOnly = True
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
    end
    object gamesNAV: TDBNavigator
      Left = 753
      Top = 74
      Width = 25
      Height = 240
      DataSource = gamesDS
      Kind = dbnVertical
      TabOrder = 1
    end
    object DBEdit12: TDBEdit
      Left = 40
      Top = 365
      Width = 41
      Height = 21
      DataField = 'userID'
      DataSource = gamesDS
      TabOrder = 2
    end
    object DBEdit14: TDBEdit
      Left = 199
      Top = 365
      Width = 58
      Height = 21
      DataField = 'Kills'
      DataSource = gamesDS
      TabOrder = 3
    end
    object DBEdit15: TDBEdit
      Left = 359
      Top = 365
      Width = 58
      Height = 21
      DataField = 'Deaths'
      DataSource = gamesDS
      TabOrder = 4
    end
    object DBEdit16: TDBEdit
      Left = 287
      Top = 365
      Width = 57
      Height = 21
      DataField = 'Assists'
      DataSource = gamesDS
      TabOrder = 5
    end
    object DBEdit17: TDBEdit
      Left = 431
      Top = 365
      Width = 78
      Height = 21
      DataField = 'Won'
      DataSource = gamesDS
      TabOrder = 6
    end
    object DBEdit22: TDBEdit
      Left = 96
      Top = 367
      Width = 81
      Height = 21
      DataField = 'gameID'
      DataSource = gamesDS
      TabOrder = 7
    end
  end
  object Champions: TGroupBox
    Left = 64
    Top = 628
    Width = 849
    Height = 425
    Caption = 'Champions'
    TabOrder = 1
    object Label10: TLabel
      Left = 328
      Top = 296
      Width = 18
      Height = 13
      Caption = 'role'
      FocusControl = DBEdit10
    end
    object Label11: TLabel
      Left = 435
      Top = 296
      Width = 41
      Height = 13
      Caption = 'difficulty'
      FocusControl = DBEdit11
    end
    object Label12: TLabel
      Left = 538
      Top = 296
      Width = 59
      Height = 13
      Caption = 'primaryLane'
    end
    object Label7: TLabel
      Left = 18
      Top = 296
      Width = 8
      Height = 13
      Caption = 'id'
      FocusControl = DBEdit7
    end
    object Label8: TLabel
      Left = 75
      Top = 296
      Width = 26
      Height = 13
      Caption = 'name'
      FocusControl = DBEdit8
    end
    object Label9: TLabel
      Left = 192
      Top = 296
      Width = 18
      Height = 13
      Caption = 'title'
      FocusControl = DBEdit9
    end
    object champsGrid: TDBGrid
      Left = 8
      Top = 25
      Width = 729
      Height = 265
      DataSource = champsDS
      ReadOnly = True
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
    end
    object champsNAV: TDBNavigator
      Left = 752
      Top = 50
      Width = 25
      Height = 240
      DataSource = champsDS
      Kind = dbnVertical
      TabOrder = 1
    end
    object DBEdit10: TDBEdit
      Left = 296
      Top = 315
      Width = 81
      Height = 21
      DataField = 'role'
      DataSource = champsDS
      TabOrder = 2
    end
    object DBEdit11: TDBEdit
      Left = 409
      Top = 315
      Width = 93
      Height = 21
      DataField = 'difficulty'
      DataSource = champsDS
      TabOrder = 3
    end
    object DBEdit7: TDBEdit
      Left = 8
      Top = 315
      Width = 23
      Height = 21
      DataField = 'id'
      DataSource = champsDS
      TabOrder = 4
    end
    object DBEdit8: TDBEdit
      Left = 50
      Top = 315
      Width = 71
      Height = 21
      DataField = 'name'
      DataSource = champsDS
      TabOrder = 5
    end
    object DBEdit9: TDBEdit
      Left = 137
      Top = 315
      Width = 128
      Height = 21
      DataField = 'title'
      DataSource = champsDS
      TabOrder = 6
    end
    object roleCB: TDBLookupComboBox
      Left = 524
      Top = 315
      Width = 85
      Height = 21
      DataField = 'primaryLane'
      DataSource = champsDS
      KeyField = 'laneName'
      ListField = 'laneName'
      ListSource = lanesDS
      TabOrder = 7
    end
  end
  object Users: TGroupBox
    Left = 64
    Top = 217
    Width = 849
    Height = 405
    Caption = 'Users'
    TabOrder = 2
    object filterL: TLabel
      Left = 18
      Top = 23
      Width = 145
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'Filter By'
    end
    object Label1: TLabel
      Left = 50
      Top = 346
      Width = 8
      Height = 13
      Caption = 'id'
      FocusControl = DBEdit1
    end
    object Label2: TLabel
      Left = 125
      Top = 346
      Width = 47
      Height = 13
      Caption = 'username'
      FocusControl = DBEdit2
    end
    object Label3: TLabel
      Left = 248
      Top = 346
      Width = 46
      Height = 13
      Caption = 'firstName'
      FocusControl = DBEdit3
    end
    object Label4: TLabel
      Left = 377
      Top = 346
      Width = 44
      Height = 13
      Caption = 'lastName'
      FocusControl = DBEdit4
    end
    object Label5: TLabel
      Left = 514
      Top = 346
      Width = 24
      Height = 13
      Caption = 'email'
      FocusControl = DBEdit5
    end
    object Label6: TLabel
      Left = 625
      Top = 346
      Width = 28
      Height = 13
      Caption = 'admin'
      FocusControl = DBEdit6
    end
    object sort1L: TLabel
      Left = 600
      Top = 23
      Width = 145
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'Sort By'
    end
    object Label24: TLabel
      Left = 696
      Top = 346
      Width = 31
      Height = 13
      Alignment = taCenter
      Caption = 'server'
      FocusControl = DBEdit23
    end
    object clearUsers: TButton
      Left = 457
      Top = 42
      Width = 137
      Height = 21
      Caption = 'Clear Sorting and Filters'
      TabOrder = 0
      OnClick = clearUsersClick
    end
    object DBEdit1: TDBEdit
      Left = 34
      Top = 365
      Width = 43
      Height = 21
      DataField = 'id'
      DataSource = usersDS
      TabOrder = 1
    end
    object DBEdit2: TDBEdit
      Left = 97
      Top = 365
      Width = 104
      Height = 21
      DataField = 'username'
      DataSource = usersDS
      TabOrder = 2
    end
    object DBEdit3: TDBEdit
      Left = 226
      Top = 365
      Width = 96
      Height = 21
      DataField = 'firstName'
      DataSource = usersDS
      TabOrder = 3
    end
    object DBEdit4: TDBEdit
      Left = 345
      Top = 365
      Width = 112
      Height = 21
      DataField = 'lastName'
      DataSource = usersDS
      TabOrder = 4
    end
    object DBEdit5: TDBEdit
      Left = 474
      Top = 365
      Width = 120
      Height = 21
      DataField = 'email'
      DataSource = usersDS
      TabOrder = 5
    end
    object DBEdit6: TDBEdit
      Left = 610
      Top = 365
      Width = 65
      Height = 21
      DataField = 'admin'
      DataSource = usersDS
      TabOrder = 6
    end
    object filterOK: TButton
      Left = 328
      Top = 42
      Width = 83
      Height = 21
      Caption = 'Apply Filter'
      TabOrder = 7
      OnClick = filterOKClick
    end
    object filterValueTE: TEdit
      Left = 169
      Top = 42
      Width = 153
      Height = 21
      TabOrder = 8
    end
    object userFilter: TComboBox
      Left = 18
      Top = 42
      Width = 145
      Height = 21
      Style = csDropDownList
      TabOrder = 9
      Items.Strings = (
        'id'
        'username'
        'firstName'
        'lastName'
        'email'
        'admin')
    end
    object usersGrid: TDBGrid
      Left = 18
      Top = 69
      Width = 729
      Height = 265
      DataSource = usersDS
      ReadOnly = True
      TabOrder = 10
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
    end
    object usersNAV: TDBNavigator
      Left = 753
      Top = 74
      Width = 25
      Height = 240
      DataSource = usersDS
      Kind = dbnVertical
      TabOrder = 11
    end
    object userSort: TComboBox
      Left = 600
      Top = 42
      Width = 145
      Height = 21
      Style = csDropDownList
      TabOrder = 12
      OnChange = userSortChange
      Items.Strings = (
        'id'
        'username'
        'firstName'
        'lastName'
        'email'
        'admin')
    end
    object DBEdit23: TDBEdit
      Left = 696
      Top = 365
      Width = 88
      Height = 21
      DataField = 'server'
      DataSource = usersDS
      TabOrder = 13
    end
  end
  object Skins: TGroupBox
    Left = 976
    Top = 628
    Width = 857
    Height = 425
    Caption = 'Skins'
    TabOrder = 3
    object Label19: TLabel
      Left = 48
      Top = 296
      Width = 29
      Height = 13
      Caption = 'skinID'
      FocusControl = DBEdit18
    end
    object Label21: TLabel
      Left = 296
      Top = 296
      Width = 45
      Height = 13
      Caption = 'skinName'
      FocusControl = DBEdit20
    end
    object Label22: TLabel
      Left = 496
      Top = 296
      Width = 20
      Height = 13
      Caption = 'cost'
      FocusControl = DBEdit21
    end
    object Label20: TLabel
      Left = 144
      Top = 296
      Width = 61
      Height = 13
      Caption = 'championsID'
      FocusControl = DBEdit19
    end
    object DBGrid2: TDBGrid
      Left = 16
      Top = 24
      Width = 729
      Height = 257
      DataSource = skinsDS
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
    end
    object skinNAV: TDBNavigator
      Left = 751
      Top = 32
      Width = 25
      Height = 240
      DataSource = skinsDS
      Kind = dbnVertical
      TabOrder = 1
    end
    object DBEdit18: TDBEdit
      Left = 40
      Top = 315
      Width = 57
      Height = 21
      DataField = 'skinID'
      DataSource = skinsDS
      TabOrder = 2
    end
    object DBEdit20: TDBEdit
      Left = 249
      Top = 315
      Width = 153
      Height = 21
      DataField = 'skinName'
      DataSource = skinsDS
      TabOrder = 3
    end
    object DBEdit21: TDBEdit
      Left = 440
      Top = 315
      Width = 134
      Height = 21
      DataField = 'cost'
      DataSource = skinsDS
      TabOrder = 4
    end
    object uploadBTN: TButton
      Left = 608
      Top = 312
      Width = 113
      Height = 25
      Caption = 'Upload Skin Image'
      TabOrder = 5
      OnClick = uploadBTNClick
    end
    object DBEdit19: TDBEdit
      Left = 144
      Top = 315
      Width = 65
      Height = 21
      DataField = 'championsID'
      DataSource = skinsDS
      TabOrder = 6
    end
  end
  object adminDriver: TFDPhysMySQLDriverLink
    DriverID = 'adminDriver'
    VendorLib = './/libmysql.dll'
    Left = 900
    Top = 433
  end
  object adminConnection: TFDConnection
    Params.Strings = (
      'Database=noxianconnect'
      'User_Name=admin'
      'Password=1234'
      'Port=3308'
      'DriverID=adminDriver')
    Connected = True
    LoginPrompt = False
    Left = 948
    Top = 433
  end
  object usersTable: TFDTable
    Active = True
    IndexFieldNames = 'id'
    Connection = adminConnection
    TableName = 'noxianconnect.users'
    Left = 876
    Top = 281
    object usersTableid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ReadOnly = True
    end
    object usersTableusername: TStringField
      DisplayWidth = 17
      FieldName = 'username'
      Origin = 'username'
      Required = True
    end
    object usersTableserver: TStringField
      FieldName = 'server'
      Origin = 'server'
      Required = True
      Size = 15
    end
    object usersTablefirstName: TStringField
      DisplayWidth = 17
      FieldName = 'firstName'
      Origin = 'firstName'
      Required = True
      Size = 25
    end
    object usersTablelastName: TStringField
      DisplayWidth = 17
      FieldName = 'lastName'
      Origin = 'lastName'
      Required = True
      Size = 30
    end
    object usersTableemail: TStringField
      FieldName = 'email'
      Origin = 'email'
      Required = True
      Size = 40
    end
    object usersTableadmin: TIntegerField
      FieldName = 'admin'
      Origin = 'admin'
      Required = True
    end
  end
  object champsTable: TFDTable
    Active = True
    IndexFieldNames = 'id'
    Connection = adminConnection
    TableName = 'noxianconnect.champions'
    Left = 900
    Top = 862
    object champsTableid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ReadOnly = True
    end
    object champsTablename: TStringField
      FieldName = 'name'
      Origin = 'name'
      Required = True
    end
    object champsTabletitle: TStringField
      DisplayWidth = 35
      FieldName = 'title'
      Origin = 'title'
      Required = True
      Size = 50
    end
    object champsTablerole: TStringField
      FieldName = 'role'
      Origin = 'role'
      Required = True
    end
    object champsTabledifficulty: TStringField
      DisplayWidth = 19
      FieldName = 'difficulty'
      Origin = 'difficulty'
      Required = True
      Size = 10
    end
    object champsTableprimaryLane: TStringField
      FieldName = 'primaryLane'
      Origin = 'primaryLane'
      Required = True
      Size = 3
    end
  end
  object usersDS: TDataSource
    DataSet = usersTable
    Left = 884
    Top = 337
  end
  object champsDS: TDataSource
    DataSet = champsTable
    Left = 900
    Top = 926
  end
  object lanesTable: TFDTable
    IndexFieldNames = 'id'
    Connection = adminConnection
    TableName = 'noxianconnect.lanes'
    Left = 700
    Top = 942
  end
  object lanesDS: TDataSource
    DataSet = lanesTable
    Left = 756
    Top = 942
  end
  object gamesTable: TFDTable
    Active = True
    OnCalcFields = gamesTableCalcFields
    IndexFieldNames = 'gameID'
    Connection = adminConnection
    TableName = 'noxianconnect.usergames'
    Left = 1836
    Top = 536
    object gamesTablegameID: TFDAutoIncField
      FieldName = 'gameID'
      Origin = 'gameID'
      ReadOnly = True
    end
    object gamesTableuserID: TIntegerField
      FieldName = 'userID'
      Origin = 'userID'
      Required = True
    end
    object gamesTableuser: TStringField
      FieldKind = fkLookup
      FieldName = 'user'
      LookupDataSet = usersTable
      LookupKeyFields = 'id'
      LookupResultField = 'username'
      KeyFields = 'userID'
      Lookup = True
    end
    object gamesTablechampPlayed: TStringField
      FieldName = 'champPlayed'
      Origin = 'champPlayed'
      Required = True
    end
    object gamesTableKills: TIntegerField
      FieldName = 'Kills'
      Origin = 'Kills'
      Required = True
    end
    object gamesTableDeaths: TIntegerField
      FieldName = 'Deaths'
      Origin = 'Deaths'
      Required = True
    end
    object gamesTableAssists: TIntegerField
      FieldName = 'Assists'
      Origin = 'Assists'
      Required = True
    end
    object gamesTableWon: TIntegerField
      FieldName = 'Won'
      Origin = 'Won'
      Required = True
    end
    object gamesTableKDA: TFloatField
      FieldKind = fkCalculated
      FieldName = 'KDA'
      Calculated = True
    end
  end
  object gamesDS: TDataSource
    DataSet = gamesTable
    Left = 1836
    Top = 480
  end
  object skinsTable: TFDQuery
    Active = True
    Connection = adminConnection
    SQL.Strings = (
      'select * from noxianconnect.skins')
    Left = 1796
    Top = 929
    object skinsTableskinID: TFDAutoIncField
      FieldName = 'skinID'
      Origin = 'skinID'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object skinsTablechampionsID: TIntegerField
      FieldName = 'championsID'
      Origin = 'championsID'
      Required = True
    end
    object skinsTablechampionsName: TStringField
      FieldKind = fkLookup
      FieldName = 'championsName'
      LookupDataSet = champsTable
      LookupKeyFields = 'id'
      LookupResultField = 'name'
      KeyFields = 'championsID'
      Lookup = True
    end
    object skinsTableskinName: TStringField
      FieldName = 'skinName'
      Origin = 'skinName'
      Required = True
      Size = 50
    end
    object skinsTablecost: TIntegerField
      FieldName = 'cost'
      Origin = 'cost'
      Required = True
    end
    object skinsTablepreview: TBlobField
      AutoGenerateValue = arDefault
      FieldName = 'preview'
      Origin = 'preview'
    end
  end
  object skinsDS: TDataSource
    DataSet = skinsTable
    Left = 1788
    Top = 993
  end
  object imageUploader: TOpenDialog
    Left = 1732
    Top = 993
  end
end
