jQuery(document).ready(function($) {
    
    var replace_str = $('.EC-region-right .views-field-field-button-text').text();
    var trimmed_str = $.trim(replace_str)
    $('.EC-region-right form.compact-form input.form-submit').val(trimmed_str);
    
    $('.EC-region-right .view-service-request .views-field-field-button-text').remove();
});