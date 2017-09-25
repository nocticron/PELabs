object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Containers'
  ClientHeight = 734
  ClientWidth = 471
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
    Left = 336
    Top = 118
    Width = 3
    Height = 13
  end
  object Label2: TLabel
    Left = 225
    Top = 118
    Width = 105
    Height = 13
    Caption = #1056#1072#1079#1084#1077#1088' '#1082#1086#1085#1090#1077#1081#1085#1077#1088#1072': '
  end
  object Label4: TLabel
    Left = 32
    Top = 96
    Width = 81
    Height = 13
    Caption = #1063#1080#1089#1083#1086' '#1078#1080#1090#1077#1083#1077#1081':'
  end
  object Label5: TLabel
    Left = 32
    Top = 45
    Width = 91
    Height = 13
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1075#1086#1088#1086#1076#1072':'
  end
  object Label3: TLabel
    Left = 264
    Top = 272
    Width = 31
    Height = 13
    Caption = 'Label3'
  end
  object Label6: TLabel
    Left = 32
    Top = 430
    Width = 155
    Height = 22
    Caption = #1053#1072#1081#1090#1080' N '#1082#1088#1091#1087#1085#1077#1081#1096#1080#1093' '#1075#1086#1088#1086#1076#1086#1074':'
  end
  object Edit1: TEdit
    Left = 32
    Top = 64
    Width = 145
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 32
    Top = 115
    Width = 145
    Height = 21
    TabOrder = 1
  end
  object Add: TButton
    Left = 224
    Top = 60
    Width = 82
    Height = 30
    Caption = 'Add'
    TabOrder = 2
    OnClick = AddClick
  end
  object Edit3: TEdit
    Left = 32
    Top = 224
    Width = 145
    Height = 21
    TabOrder = 3
  end
  object Edit4: TEdit
    Left = 32
    Top = 264
    Width = 145
    Height = 21
    TabOrder = 4
  end
  object Prior: TButton
    Left = 224
    Top = 224
    Width = 41
    Height = 49
    Caption = '<'
    Enabled = False
    TabOrder = 5
    OnClick = PriorClick
  end
  object Next: TButton
    Left = 288
    Top = 224
    Width = 41
    Height = 49
    Caption = '>'
    Enabled = False
    TabOrder = 6
    OnClick = NextClick
  end
  object Change: TButton
    Left = 224
    Top = 291
    Width = 105
    Height = 30
    Caption = 'Change Your Mind'
    TabOrder = 7
    OnClick = ChangeClick
  end
  object Button1: TButton
    Left = 224
    Top = 456
    Width = 113
    Height = 25
    Caption = 'Search'
    TabOrder = 8
    OnClick = Button1Click
  end
  object Edit5: TEdit
    Left = 32
    Top = 458
    Width = 121
    Height = 21
    TabOrder = 9
  end
end
