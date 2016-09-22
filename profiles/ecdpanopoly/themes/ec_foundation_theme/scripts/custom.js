jQuery(document).ready(function($) {

    var replace_str = $('.views-field-field-button-text').text();
    var trimmed_str = $.trim(replace_str)
    $('.entityform input.form-submit').val(trimmed_str);

    $('.view .views-field-field-button-text').remove();
});
