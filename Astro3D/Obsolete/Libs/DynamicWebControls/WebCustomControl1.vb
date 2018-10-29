Imports System.ComponentModel
Imports System.Web.UI

<DefaultProperty("Text"), ToolboxData("<{0}:WebCustomControl1 runat=server></{0}:DynamicPanel>")> Public Class DynamicPanel
    Inherits System.Web.UI.WebControls.Panel

    Dim _text As String

    <Bindable(True), Category("Appearance"), DefaultValue("")> Property [Text]() As String
        Get
            Return _text
        End Get

        Set(ByVal Value As String)
            _text = Value
        End Set
    End Property

    Protected Overrides Sub Render(ByVal output As System.Web.UI.HtmlTextWriter)
        output.Write([Text])
    End Sub

End Class

