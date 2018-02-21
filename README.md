Amazon API module
=================

Please read the handbook documentation at http://drupal.org/node/595464.

The Amazon package gives Backdrop based web sites access to the core features of 
the Amazon Product Marketing API. The package provides several components:

1) A core API module that communicates with Amazon's web services and adds 
   support for retrieving, displaying, and storing basic product information 
   in Backdrop as well as associating Amazon products with content nodes. 
2) A field type (and an accompanying set of formatters) for CCK that allows 
   Amazon products to be explicitly added to any node type. 
3) An 'Amazon Media' module that adds support for Amazon's extended product 
   information for several common product types (Books, Music, DVDs, and 
   Software).
4) An 'Amazon Search' module that allows developers to conduct API-driven 
   searches of the Amazon product database. This module also allows users to 
   search Amazon's product database from Backdrop's Advanced Search page.

Most users and site builders will want to enable the basic Amazon API module, 
as well as the Amazon Field and Amazon Media modules. These provide the 
functionality that the majority of simple sites need. 

For more information, visit the project page at http://drupal.org/project/amazon 
and the project documentation at http://drupal.org/node/595464.

Amazon API conventions
----------------------

- All element keys are lowercased for consistency
- The Amazon ItemAttributes collection is merged into the top level of the 
  Backdrop entity for simplicity.
- Information outside the 'common' ItemAttributes, Product Images, and 
  Artist/Author/Etc. data must be handled by external third-party modules.
- Authors, Directors, and other creator information is stored in the generic 
  $item['participants'] array. It's a crummy name, but until I come up with
   something better it'll have to do. A separate array for each participant type 
   is also created.
   
Themeing
--------

There is a vast array of theming possibility with Amazon and the Amazon Media
module.

Most of the theming is done with .tpl.php files. You can copy these .tpl.php
files into your theme and modify them:

amazon-inline-item.tpl.php              a simple text link
amazon-item-details.tpl.php             an item with detail info
amazon-item-detail.tpl.php              a single detail (for amazon_filter)
amazon-item-thumbnail.tpl.php           a thumbnail image
amazon-item--large.tpl.php              a large image
amazon-item--medium.tpl.php             a medium image
amazon-item.tpl.php                     an item with less detail
amazon-views-view-row-item.tpl.php      a views row

In addition, "theme hook suggestions" are provided for both amazon-item and
amazon-inline-item. For an amazon-item, you can theme it with a template
flle named amazon-item--<type>--<style>, so you could separately theme
large DVD images with a template file amazon-item--dvd--large.tpl.php in your
theme.

The amazon_media module, if enabled, extends theming capabilities with a number
of its own template files and a few template functions. You can override those
as well.

In most cases an overwhelming number of variables is available in the template
file. See template_preprocess_amazon_item() in amazon.module for more
information.


License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.

Maintainers
-----------

- https://github.com/docwilmot/

Originally written for Backdrop by

- https://www.drupal.org/u/rfay

This module is seeking additional maintainers.
