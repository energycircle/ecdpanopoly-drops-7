jQuery(document).ready(function($) {

  console.log("JS is included");



    $('#field-a-b-reference-page-add-more-wrapper').css('display', 'none');
    $('#field-a-b-reason-for-testing-add-more-wrapper').css('display', 'none');


  $('#edit-field-a-b-test-page-und--2').change(function() {

   if( $('#edit-field-a-b-test-page-und--2 input').is(':checked') ) {

     $('#field-a-b-reference-page-add-more-wrapper').css('display', 'block');
     $('#field-a-b-reason-for-testing-add-more-wrapper').css('display', 'block');

     $('#a_b_testing_group .fieldset-description').css('display', 'none');
     $('#a_b_testing_group .form-item-code').css('display', 'none');
     $('#a_b_testing_group .form-item-code input#edit-code').val("");

   } else {
     $('#field-a-b-reference-page-add-more-wrapper').css('display', 'none');
     $('#field-a-b-reason-for-testing-add-more-wrapper').css('display', 'none');
     $('#a_b_testing_group .fieldset-description').css('display', 'block');
     $('#a_b_testing_group .form-item-code').css('display', 'block');
   }

  });

});
