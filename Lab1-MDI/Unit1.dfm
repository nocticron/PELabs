object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Lab1'
  ClientHeight = 517
  ClientWidth = 728
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
  object Edit2: TEdit
    Left = 288
    Top = 440
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '2'
    TextHint = 'Columns'
    OnChange = Edit2Change
  end
  object Edit1: TEdit
    Left = 48
    Top = 440
    Width = 121
    Height = 21
    TabOrder = 2
    Text = '2'
    TextHint = 'Rows'
    OnChange = Edit1Change
  end
end
