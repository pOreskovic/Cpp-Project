object logsPage: TlogsPage
  Left = 0
  Top = 0
  Caption = 'logsPage'
  ClientHeight = 555
  ClientWidth = 950
  Color = clSilver
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object settingsLogs: TListView
    Left = 144
    Top = 96
    Width = 665
    Height = 345
    Columns = <
      item
        Caption = 'Date'
        Width = 120
      end
      item
        Caption = 'Time'
        Width = 100
      end
      item
        Caption = 'Language Selected'
        Width = 120
      end
      item
        Caption = 'Style Selected'
        Width = 100
      end
      item
        Caption = 'Font Selected'
        Width = 100
      end
      item
        Caption = 'Font Size Selected'
        Width = 100
      end>
    TabOrder = 0
    ViewStyle = vsReport
  end
end
