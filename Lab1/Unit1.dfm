object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Lab1'
  ClientHeight = 498
  ClientWidth = 728
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 499
    Top = 303
    Width = 174
    Height = 66
    AutoSize = False
  end
  object Label2: TLabel
    Left = 48
    Top = 421
    Width = 62
    Height = 13
    Caption = #1063#1080#1089#1083#1086' '#1089#1090#1088#1086#1082
  end
  object Label3: TLabel
    Left = 288
    Top = 416
    Width = 80
    Height = 13
    Caption = #1063#1080#1089#1083#1086' '#1089#1090#1086#1083#1073#1094#1086#1074
  end
  object StringGrid1: TStringGrid
    Left = 40
    Top = 72
    Width = 409
    Height = 313
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 0
    ColWidths = (
      64
      64
      64
      64
      64)
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object RadioGroup1: TRadioGroup
    Left = 464
    Top = 72
    Width = 256
    Height = 105
    Caption = #1054#1087#1094#1080#1080
    ItemIndex = 0
    Items.Strings = (
      #1069#1083#1077#1084#1077#1085#1090' '#1089' '#1085#1072#1080#1073#1086#1083#1100#1096#1077#1081' '#1089#1091#1084#1084#1086#1081' '#1094#1080#1092#1088
      #1055#1077#1088#1074#1099#1081' '#1101#1083#1077#1084#1077#1085#1090', '#1088#1072#1074#1085#1099#1081' '#1079#1072#1076#1072#1085#1085#1086#1084#1091' '#1095#1080#1089#1083#1091)
    TabOrder = 1
  end
  object Button1: TButton
    Left = 544
    Top = 232
    Width = 75
    Height = 25
    Caption = '='
    TabOrder = 2
    OnClick = Button1Click
  end
  object Edit2: TEdit
    Left = 288
    Top = 440
    Width = 121
    Height = 21
    TabOrder = 3
    Text = '2'
    TextHint = 'Columns'
    OnChange = Edit2Change
  end
  object Edit1: TEdit
    Left = 48
    Top = 440
    Width = 121
    Height = 21
    TabOrder = 4
    Text = '2'
    TextHint = 'Rows'
    OnChange = Edit1Change
  end
  object Edit3: TEdit
    Left = 520
    Top = 191
    Width = 121
    Height = 21
    Alignment = taCenter
    TabOrder = 5
    Text = '0'
    TextHint = #1063#1080#1089#1083#1086
  end
  object MainMenu1: TMainMenu
    Left = 32
    Top = 16
    object File1: TMenuItem
      Caption = 'File'
      object N1: TMenuItem
        Caption = 'Open...'
        OnClick = N1Click
      end
    end
    object About1: TMenuItem
      Caption = 'About'
      OnClick = About1Click
      object N2: TMenuItem
      end
    end
  end
  object OpenTextFileDialog1: TOpenTextFileDialog
    Left = 640
    Top = 448
  end
end
