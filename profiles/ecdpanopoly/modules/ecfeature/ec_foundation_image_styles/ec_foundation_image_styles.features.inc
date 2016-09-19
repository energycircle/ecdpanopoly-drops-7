<?php
/**
 * @file
 * ec_foundation_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ec_foundation_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: s_140.
  $styles['s_140'] = array(
    'label' => 's_140',
    'effects' => array(
      21 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 140,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: s_220.
  $styles['s_220'] = array(
    'label' => 's_220',
    'effects' => array(
      20 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: s_300.
  $styles['s_300'] = array(
    'label' => 's_300',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: s_460.
  $styles['s_460'] = array(
    'label' => 's_460',
    'effects' => array(
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 460,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_1180.
  $styles['sc_1180'] = array(
    'label' => 'sc_1180x885	',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1180,
          'height' => 885,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_1180x590.
  $styles['sc_1180x590'] = array(
    'label' => 'sc_1180x590',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1180,
          'height' => 590,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_1280x440.
  $styles['sc_1280x440'] = array(
    'label' => 'sc_1280x440',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 440,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_1280x440_mc.
  $styles['sc_1280x440_mc'] = array(
    'label' => 'sc_1280x440_mc',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1280,
          'height' => 440,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'sc_1280x440_mc',
        ),
        'weight' => -11,
      ),
    ),
  );

  // Exported image style: sc_140x105.
  $styles['sc_140x105'] = array(
    'label' => 'sc_140x105',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 105,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_140x70.
  $styles['sc_140x70'] = array(
    'label' => 'sc_140x70',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_200x100.
  $styles['sc_200x100'] = array(
    'label' => 'sc_200x100',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: sc_220x110.
  $styles['sc_220x110'] = array(
    'label' => 'sc_220x110',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_220x165.
  $styles['sc_220x165'] = array(
    'label' => 'sc_220x165',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 165,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_300x150.
  $styles['sc_300x150'] = array(
    'label' => 'sc_300x150',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_300x225.
  $styles['sc_300x225'] = array(
    'label' => 'sc_300x225',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 225,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_300x250_custom_mc.
  $styles['sc_300x250_custom_mc'] = array(
    'label' => 'sc_300x250_custom_mc',
    'effects' => array(
      5 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 300,
          'height' => 250,
          'keepproportions' => 0,
          'reuse_crop_style' => 'panopoly_image_square',
          'style_name' => 'sc_300x250_custom_mc',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: sc_460x230.
  $styles['sc_460x230'] = array(
    'label' => 'sc_460x230',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_460x345.
  $styles['sc_460x345'] = array(
    'label' => 'sc_460x345',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 345,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_60x30.
  $styles['sc_60x30'] = array(
    'label' => 'sc_60x30',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 30,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_60x45.
  $styles['sc_60x45'] = array(
    'label' => 'sc_60x45',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 45,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_620x310.
  $styles['sc_620x310'] = array(
    'label' => 'sc_620x310',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 620,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_620x465.
  $styles['sc_620x465'] = array(
    'label' => 'sc_620x465',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 620,
          'height' => 465,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_780x390.
  $styles['sc_780x390'] = array(
    'label' => 'sc_780x390',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 780,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_780x585.
  $styles['sc_780x585'] = array(
    'label' => 'sc_780x585',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 780,
          'height' => 585,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_940x470.
  $styles['sc_940x470'] = array(
    'label' => 'sc_940x470',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 470,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sc_940x470_mc.
  $styles['sc_940x470_mc'] = array(
    'label' => 'sc_940x470_mc',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 940,
          'height' => 470,
          'upscale' => 0,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 1,
          'style_name' => 'sc_940x470_mc',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: sc_940x705.
  $styles['sc_940x705'] = array(
    'label' => 'sc_940x705',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 705,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ss_200x100.
  $styles['ss_200x100'] = array(
    'label' => 'ss_200x100',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
