object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 348
  ClientWidth = 535
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsMDIChild
  OldCreateOrder = False
  Visible = True
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 153
    Top = 242
    Width = 174
    Height = 66
    AutoSize = False
  end
  object RadioGroup1: TRadioGroup
    Left = 71
    Top = 32
    Width = 256
    Height = 105
    Caption = #1054#1087#1094#1080#1080
    ItemIndex = 0
    Items.Strings = (
      #1069#1083#1077#1084#1077#1085#1090' '#1089' '#1085#1072#1080#1073#1086#1083#1100#1096#1077#1081' '#1089#1091#1084#1084#1086#1081' '#1094#1080#1092#1088
      #1055#1077#1088#1074#1099#1081' '#1101#1083#1077#1084#1077#1085#1090', '#1088#1072#1074#1085#1099#1081' '#1079#1072#1076#1072#1085#1085#1086#1084#1091' '#1095#1080#1089#1083#1091)
    TabOrder = 0
  end
  object Button1: TButton
    Left = 252
    Top = 192
    Width = 75
    Height = 25
    Caption = '='
    TabOrder = 1
    OnClick = Button1Click
  end
  object Edit3: TEdit
    Left = 206
    Top = 151
    Width = 121
    Height = 21
    Alignment = taCenter
    TabOrder = 2
    Text = '0'
    TextHint = #1063#1080#1089#1083#1086
  end
end
