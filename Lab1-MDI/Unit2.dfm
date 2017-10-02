object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 348
  ClientWidth = 535
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsMDIForm
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object MainMenu1: TMainMenu
    Left = 96
    Top = 48
    object F1: TMenuItem
      Caption = 'Mode'
      object Input1: TMenuItem
        Caption = 'Input'
        OnClick = Input1Click
      end
      object Solve1: TMenuItem
        Caption = 'Solve'
        OnClick = Solve1Click
      end
    end
    object Windows1: TMenuItem
      Caption = 'Windows'
      object ile1: TMenuItem
        Caption = 'Tile'
        OnClick = ile1Click
      end
      object Cascade1: TMenuItem
        Caption = 'Cascade'
        OnClick = Cascade1Click
      end
      object CloseCurrent1: TMenuItem
        Caption = 'Close Current'
        OnClick = CloseCurrent1Click
      end
    end
    object About1: TMenuItem
      Caption = 'About'
    end
  end
end
