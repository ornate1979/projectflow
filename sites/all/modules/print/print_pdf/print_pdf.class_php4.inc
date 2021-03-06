<?php
// $Id: print_pdf.class_php4.inc,v 1.3.2.2 2008/10/02 22:22:59 jcnventura Exp $

/**
 * @file
 * Extend the TCPDF class to be able to customize the Footer (PHP4 version)
 *
 * This file is included by the _print_pdf_tcpdf function when the current
 * PHP_VERSION is less than 5.0.0
 */

class PrintTCPDF extends TCPDF {
  var $footer;

  //Page footer data
  function SetFooterData($arg = '') {
    $this->footer = $arg;
  }

  //Page footer
  function Footer() {
    $this = theme('print_pdf_tcpdf_footer2', $this);
  }
}
