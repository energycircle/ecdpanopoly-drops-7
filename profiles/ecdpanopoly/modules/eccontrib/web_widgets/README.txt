Web Widgets
===========

"Copy/paste widgets for your Drupal site. Plays nice with Views."

Description
===========

Use Web Widgets to build dynamic snippets of your website that users can copy 
and paste to their websites.

Installation and Usage
======================

Web widgets can be used by any other module to generate copy/paste widgets. 
However, the most common use case is to use it together with Views module.

Here is how to use Web Widgets with Views: 

* Install Views http://drupal.org/project/views.
* Install Web Widgets.
* Create a new view
  - Add and configure a Page display (it needs a path ie /frontpage)
  - Add and configure a Widget display
    - Set its path ie /frontpage/widget.
    - Attach embed code to Page display.
* Now visit the page ie /frontpage.
  - You should see a text field with code that can be embedded on other websites.

API Usage
=========

The API functions are:
web_widgets_render_embed_code($style, $path, $width, $height);
web_widgets_render_widget($style, $content, $title, $add_target = TRUE);

$style can be google_gadgets, iframe, inline or uwa

1) Get the code what you can paste into the external site, for example:

$variables = array('path' => 'mywidget', 'width' => 100, 'height' => 500);
$embed_code = web_widgets_render_embed_code('inline', $variables);

2) In hook_menu(), define the path that you exposed in the widget embedding code, for example:

$['mywidget'] = array(
  '#page callback' => 'widgetfunc',
  '#access arguments' => array('access content'),
);

3) Generates the content inside the widget, for example:

function widgetfunc() {
  $title = 'example widget';
  $content = 'widget body';
  return web_widgets_render_widget('inline', $content, $title);
}
