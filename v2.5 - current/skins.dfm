object skinsPage: TskinsPage
  Left = 0
  Top = 0
  Caption = 'Skins'
  ClientHeight = 699
  ClientWidth = 1226
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object skinImage: TDBImage
    Left = 664
    Top = 32
    Width = 521
    Height = 473
    DataField = 'preview'
    DataSource = skins
    Stretch = True
    TabOrder = 0
  end
  object skinsGrid: TDBGrid
    Left = 8
    Top = 280
    Width = 641
    Height = 225
    DataSource = skins
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 32
    Width = 641
    Height = 242
    DataSource = champs
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object exportPDF: TButton
    Left = 464
    Top = 511
    Width = 185
    Height = 25
    Caption = 'Export Skins By Champions ( PDF)'
    TabOrder = 3
    OnClick = exportPDFClick
  end
  object rpCalc: TGroupBox
    Left = 664
    Top = 536
    Width = 425
    Height = 145
    Caption = 'Riot Points Calculator'
    TabOrder = 4
    object Label1: TLabel
      Left = 32
      Top = 32
      Width = 19
      Height = 16
      Alignment = taCenter
      Caption = 'For'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object rpCost: TEdit
      Left = 64
      Top = 32
      Width = 97
      Height = 21
      TabOrder = 0
      Text = '1350'
    end
    object moneyForRP: TEdit
      Left = 200
      Top = 32
      Width = 121
      Height = 21
      TabOrder = 1
      Text = 'moneyForRP'
    end
    object currencyCB: TComboBox
      Left = 336
      Top = 32
      Width = 73
      Height = 21
      Style = csDropDownList
      TabOrder = 2
      Items.Strings = (
        'USD'
        'EUR'
        'HRK')
    end
    object rpMoneyCalc: TButton
      Left = 144
      Top = 59
      Width = 75
      Height = 25
      Caption = 'Calculate'
      TabOrder = 3
      OnClick = rpMoneyCalcClick
    end
  end
  object skinsConnection: TFDConnection
    Params.Strings = (
      'Database=noxianconnect'
      'User_Name=admin'
      'Password=1234'
      'Port=3308'
      'DriverID=skinsDriver')
    Connected = True
    LoginPrompt = False
    Left = 120
    Top = 536
  end
  object skins: TDataSource
    DataSet = skinsTablee
    Left = 584
    Top = 552
  end
  object skinsDriver: TFDPhysMySQLDriverLink
    DriverID = 'skinsDriver'
    VendorLib = 'E:\FAKS\AppC++\v2.5 - current\libmysql.dll'
    Left = 40
    Top = 536
  end
  object champsTable: TFDTable
    Active = True
    IndexFieldNames = 'id'
    Connection = skinsConnection
    TableName = 'noxianconnect.champions'
    Left = 408
    Top = 560
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
  object skinsReport: TfrxReport
    Version = '2023.1.3'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick, pbCopy, pbSelection]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44969.882960428200000000
    ReportOptions.LastChange = 44975.057178703700000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 824
    Top = 376
    Datasets = <
      item
        DataSet = skinsDataset
        DataSetName = 'skinsDataset'
      end
      item
        DataSet = championsDataset
        DataSetName = 'champsDataset'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Typ = []
      MirrorMode = []
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        FillGap.Top = 0
        FillGap.Left = 0
        FillGap.Bottom = 0
        FillGap.Right = 0
        Frame.Typ = []
        Height = 79.370130000000000000
        Top = 185.196970000000000000
        Width = 718.110700000000000000
        DataSet = championsDataset
        DataSetName = 'champsDataset'
        RowCount = 0
        object champsDatasetname: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 26.456710000000000000
          Top = 34.015770000000000000
          Width = 158.740260000000000000
          Height = 18.897650000000000000
          DataField = 'name'
          DataSet = championsDataset
          DataSetName = 'champsDataset'
          Frame.Typ = []
          Memo.UTF8W = (
            '[champsDataset."name"]')
        end
        object Line1: TfrxLineView
          AllowVectorExport = True
          Top = 71.811070000000000000
          Width = 714.331170000000000000
          Color = clBlack
          Frame.Typ = [ftTop]
        end
        object Line2: TfrxLineView
          AllowVectorExport = True
          Top = 15.118120000000000000
          Width = 714.331170000000000000
          Color = clBlack
          Frame.Typ = [ftTop]
        end
        object Memo2: TfrxMemoView
          AllowVectorExport = True
          Left = 548.031850000000000000
          Top = 34.015770000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            'Price (RP)')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo3: TfrxMemoView
          AllowVectorExport = True
          Left = 192.756030000000000000
          Top = 34.015770000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = []
          Memo.UTF8W = (
            'Skin Name')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object DetailData1: TfrxDetailData
        FillType = ftBrush
        FillGap.Top = 0
        FillGap.Left = 0
        FillGap.Bottom = 0
        FillGap.Right = 0
        Frame.Typ = []
        Height = 192.756030000000000000
        Top = 287.244280000000000000
        Width = 718.110700000000000000
        DataSet = skinsDataset
        DataSetName = 'skinsDataset'
        RowCount = 0
        object skinsDatasetskinName: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 192.756030000000000000
          Top = 79.370130000000000000
          Width = 181.417440000000000000
          Height = 18.897650000000000000
          DataField = 'skinName'
          DataSet = skinsDataset
          DataSetName = 'skinsDataset'
          Frame.Typ = []
          Memo.UTF8W = (
            '[skinsDataset."skinName"]')
        end
        object Picture1: TfrxPictureView
          AllowVectorExport = True
          Left = 336.378170000000000000
          Top = 11.338590000000000000
          Width = 177.637910000000000000
          Height = 139.842610000000000000
          DataField = 'preview'
          DataSet = skinsDataset
          DataSetName = 'skinsDataset'
          Frame.Typ = []
          HightQuality = False
          Transparent = False
          TransparentColor = clWhite
        end
        object skinsDatasetcost: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 555.590910000000000000
          Top = 79.370130000000000000
          Width = 90.708720000000000000
          Height = 18.897650000000000000
          DataField = 'cost'
          DataSet = skinsDataset
          DataSetName = 'skinsDataset'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[skinsDataset."cost"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        FillGap.Top = 0
        FillGap.Left = 0
        FillGap.Bottom = 0
        FillGap.Right = 0
        Frame.Typ = []
        Height = 105.826840000000000000
        Top = 18.897650000000000000
        Width = 718.110700000000000000
        object Memo1: TfrxMemoView
          AllowVectorExport = True
          Left = 7.559060000000000000
          Top = 3.779530000000000000
          Width = 702.992580000000000000
          Height = 68.031540000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -48
          Font.Name = 'Arial'
          Font.Style = [fsUnderline]
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            'Skins By Champion')
          ParentFont = False
          VAlign = vaCenter
        end
      end
    end
  end
  object skinsDataset: TfrxDBDataset
    UserName = 'skinsDataset'
    CloseDataSource = False
    DataSet = skinsTablee
    BCDToCurrency = False
    DataSetOptions = []
    Left = 784
    Top = 440
  end
  object championsDataset: TfrxDBDataset
    UserName = 'champsDataset'
    CloseDataSource = False
    DataSet = champsTable
    BCDToCurrency = False
    DataSetOptions = []
    Left = 872
    Top = 440
  end
  object pdfExport: TfrxPDFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    EmbedFontsIfProtected = False
    InteractiveFormsFontSubset = 'A-Z,a-z,0-9,#43-#47 '
    OpenAfterExport = False
    PrintOptimized = False
    Outline = False
    Background = False
    HTMLTags = True
    Quality = 95
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    Creator = 'FastReport'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    PdfA = False
    PDFStandard = psNone
    PDFVersion = pv17
    Left = 784
    Top = 320
  end
  object rtfExport: TfrxRTFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PictureType = gpPNG
    OpenAfterExport = False
    Wysiwyg = True
    Creator = 'FastReport'
    SuppressPageHeadersFooters = False
    HeaderFooterMode = hfText
    AutoSize = False
    Left = 864
    Top = 320
  end
  object champs: TDataSource
    DataSet = champsTable
    Left = 464
    Top = 560
  end
  object skinsTablee: TFDTable
    Active = True
    IndexFieldNames = 'championsID'
    MasterSource = champs
    MasterFields = 'id'
    Connection = skinsConnection
    TableName = 'noxianconnect.skins'
    Left = 536
    Top = 552
  end
end
