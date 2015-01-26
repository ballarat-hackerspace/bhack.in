core = 7.x
api = 2



; Defaults

defaults[projects][type] = module
defaults[projects][subdir] = contrib



; Modules

projects[addressfield][version] = 1.0-beta5

projects[admin_menu][version] = 3.0-rc4

projects[admin_select][download][revision] = 8caa5d52638bac8aa74109c3cc6afea28263b60b

projects[adminimal_admin_menu][version] = 1.5

projects[bot][download][revision] = d0e10c65616f267543e717addc17422979f83bd2
; Allow Net_SmartIRC to be a Library - https://drupal.org/node/1944086#comment-7227558
projects[bot][patch][] = https://drupal.org/files/bot_0.patch
; Add variable module integration - https://drupal.org/node/2264785#comment-8770721
projects[bot][patch][] = https://drupal.org/files/issues/variable_integration-2264785-1.patch

projects[botrules][version] = 1.0-rc1
; Fixed PARTing of mixed case channels - https://drupal.org/node/2263641#comment-8767617
projects[botrules][patch][] = https://drupal.org/files/issues/part_mixed_case_fix-2263641-1.patch

projects[breakpoints][version] = 1.3

projects[coder][version] = 2.2

projects[coffee][version] = 2.2

projects[commerce][version] = 1.10

projects[commerce_bank_transfer][version] = 1.0-alpha3

projects[commerce_features][version] = 1.0

projects[commerce_recurring][download][revision] = 406cfa9d9e5ddfd295babefd68d11064d2fbaa85

projects[connector][download][revision] = 46cade3620061a41b3853374dc357f9eaf31829d
; Fix data mapping - https://drupal.org/node/1503258#comment-8596491
projects[connector][patch][] = https://drupal.org/files/issues/fix_map-1503258-13.patch

projects[context][download][revision] = 543c1c157f37a33910dcc1623fc75119c7a70a95
; Fixed context_empty() - http://drupal.org/node/1842566#comment-7269520
projects[context][patch][] = http://drupal.org/files/context_empty-1842566-1.patch
; Fixed active menu trail - https://drupal.org/node/835090#comment-7608141
projects[context][patch][] = https://drupal.org/files/context_menu_fix_2013-07-02_835090_124.patch

projects[context_condition_theme][version] = 1.0

projects[context_module][download][revision] = b7a05aa1299d9286b77f66c539826de9bebde2fb
; Prevent rederict loop - https://drupal.org/node/2076565#comment-7804715
projects[context_module][patch][] = https://drupal.org/files/redirect_loop-2076565-1.patch

projects[context_server_vars][download][revision] = 1d61d973ddb7513de9c3d82b33c8e24c24e907f2

projects[context_variable][download][revision] = 8d611c2ac42c4aaa794f78edee994c3ae5f2f6c6

projects[ctools][version] = 1.4

projects[custom_formatters][download][revision] = 6463508a3b9dbfb7feb5662b0f6825c9f58c6f60
; Remove Custom Formatters makefile to prevent duplicate downloads - http://drupal.org/node/1721294#comment-6395368
projects[custom_formatters][patch][] = http://drupal.org/files/no_makefile-1721294-1.patch

projects[date][version] = 2.8

projects[devel][version] = 1.5

projects[diff][version] = 3.2

projects[dindent][version] = 1.2

projects[ds][version] = 2.6
; Remove Block dependencies - https://drupal.org/node/1635906#comment-7672781
projects[ds][patch][] = https://drupal.org/files/remove_block_dependency-1635906-4.patch

projects[email][version] = 1.3

projects[entity][version] = 1.5

projects[entitycache][version] = 1.2

projects[entityform][version] = 2.0-beta4

projects[entityform_block][version] = 1.1

projects[entityreference][version] = 1.1

projects[environment_indicator][version] = 2.5

projects[features][version] = 2.2
; Cleaner info format - https://drupal.org/comment/8270327#comment-8270327
projects[features][patch][] = https://drupal.org/files/issues/cleaner_info-2155793-1.patch

projects[field_group][version] = 1.4

projects[fontawesome][version] = 1.0

projects[geocoder][version] = 1.2

projects[geofield][version] = 1.2

projects[geophp][version] = 1.7

projects[google_analytics][download][revision] = d5c42e145e218cf54397b70bb275484a35d8d5dc
; Allow empty Web Property ID variable - http://drupal.org/node/1964052#comment-7269728
projects[google_analytics][patch][] = http://drupal.org/files/variable_empty_id-1964052-1.patch

projects[gravatar][download][revision] = bb2f81e6b0e93156ab86e62db70cfe169418cc92

projects[http_client][version] = 2.4

projects[hacked][version] = 2.0-beta5

projects[interval][version] = 1.0

projects[jquery_update][version] = 2.4

projects[libraries][version] = 2.2

projects[link][version] = 1.2

projects[mailchimp][version] = 2.12
; Add Subscribe e-mail to list rule - https://drupal.org/node/1909306#comment-7034190
projects[mailchimp][patch][] = https://drupal.org/files/mailchimp_lists_rules_subscribe_email.patch

projects[markdown][version] = 1.2

projects[maxlength][version] = 3.0-beta1

projects[metatag][version] = 1.0-rc2

projects[module_filter][version] = 2.0-alpha2

projects[mollom][version] = 2.11
; Exportables - https://drupal.org/node/717874#comment-7538947
; projects[mollom][patch][] = https://drupal.org/files/717874-42-exportables_for_mollom.patch

projects[navbar][version] = 1.4

projects[oauth][version] = 3.2
; Rules integration - https://drupal.org/node/1248184#comment-8771229
projects[oauth][patch][] = https://drupal.org/files/issues/rules_integration-1248184-2.patch

projects[oauthconnector][version] = 1.0-beta2
; Add GitHub preset - https://drupal.org/node/1746386#comment-7439784
projects[oauthconnector][patch][] = https://drupal.org/files/oauthconnector-add-github-support-1746386-6.patch
; Fix accept header - https://drupal.org/node/1746386#comment-7861949
projects[oauthconnector][patch][] = https://drupal.org/files/1746386-11-hardcode-json-accept-header.patch

projects[page_title][version] = 2.7

projects[panels][version] = 3.4

projects[pathauto][version] = 1.2

projects[picture][version] = 2.6

projects[prlp][version] = 1.0

projects[profile2][version] = 1.3

projects[prepro][download][revision] = 306d6c59e539add57c287c60c53dbe755550dd7a
; Variable integration - http://drupal.org/node/1958564#comment-7269614
projects[prepro][patch][] = http://drupal.org/files/variable_integration-1958564-3.patch

projects[realname][version] = 1.2

projects[redirect][download][revision] = ad09f6caa52b371736e24c9e8657f2ce41b876ad
; fix and/or prevent circular redirects - https://drupal.org/node/1796596#comment-7586945
projects[redirect][patch][] = https://drupal.org/files/redirect_loop_detection-1796596-68-reroll.patch
; Merge global redirect functions into Redirect module: https://drupal.org/node/905914#comment-7179456
projects[redirect][patch][] = https://drupal.org/files/redirect-global-905914-130.patch

projects[reroute_email][download][revision] = f2e3878ec1ecba067d7206a4ba98482e6c9d836f
; Variable integration - http://drupal.org/node/1964070#comment-7294928
projects[reroute_email][patch][] = http://drupal.org/files/reroute_email-add-variable-module-integration-1964070-2.patch

projects[role_field][version] = 1.0-alpha2

projects[rules][version] = 2.7

projects[rules_conditional][version] = 1.0-beta2

projects[sassy][version] = 2.13
; Fix squish-text mixin - http://drupal.org/node/1539310#comment-7284702
projects[sassy][patch][] = http://drupal.org/files/squish_text-1539310-5.patch

projects[search_krumo][version] = 1.5

projects[securesite][download][revision] = bff993c675dbb678c5b9a45e27586a856cc5d30a

projects[semantic_panels][version] = 1.2

projects[services][version] = 3.11

projects[services_rules][version] = 1.0-beta1
; Remove 'rules_' prefix and add GET requests - https://drupal.org/node/2063819#comment-7765855
projects[services_rules][patch][] = https://drupal.org/files/combo-2063819-2067629-3.patch

projects[site_verify][version] = 1.1

projects[smtp][version] = 1.0

projects[speedy][version] = 1.12

projects[stage_file_proxy][version] = 1.6
; Add Variable module integration - https://drupal.org/node/2183195#comment-8421499
projects[stage_file_proxy][patch][] = https://drupal.org/files/issues/add_variable_module_integration-2183195-1.patch

projects[strongarm][version] = 2.0

projects[styleguide][version] = 1.1

projects[tabsnomore][download][type] = git
projects[tabsnomore][download][url] = http://git.drupal.org/sandbox/onkeltem/1730244.git
projects[tabsnomore][download][revision] = 03ab4283ba71220c988362357b79ff1a20daab6a
; Code cleanup - https://drupal.org/comment/8350053#comment-8350053
projects[tabsnomore][patch][] = https://drupal.org/files/issues/cleanup-2168407-2.patch
; Remove hook_node_view_alter() - https://drupal.org/comment/8350061#comment-8350061
projects[tabsnomore][patch][] = https://drupal.org/files/issues/node_view_alter-1784338-2.patch

projects[token][version] = 1.5

projects[variable][version] = 2.5

projects[vegas][version] = 1.0-alpha2
; Add page control - https://drupal.org/node/1929888#comment-8745029
projects[vegas][patch][] = https://drupal.org/files/issues/page_control-1929888-15.patch

projects[views][version] = 3.8

projects[views_bulk_operations][version] = 3.2

projects[views_cache_bully][version] = 3.1

projects[which_feature][download][revision] = 3ba19eea51aa288806c2c6f6032bcf6a92291f92

projects[xmlsitemap][version] = 2.0
; Variable module integration - http://drupal.org/node/1989862#comment-7389678
projects[xmlsitemap][patch][] = http://drupal.org/files/variable_integration-1989862-1.patch



; Themes

projects[bootstrap][type] = theme
projects[bootstrap][download][revision] = f05a44e



; Libraries

libraries[backbone][download][type] = get
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/1.1.2.zip

libraries[bootstrap][download][type] = get
libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v3.0.2.zip

libraries[dindent][download][type] = get
libraries[dindent][download][url] = https://raw.githubusercontent.com/Decipher/dindent/master/src/Parser.php

libraries[editarea][download][type] = get
libraries[editarea][download][url] = http://downloads.sourceforge.net/project/editarea/EditArea/EditArea%200.8.2/editarea_0_8_2.zip?r=&ts=1334742944&use_mirror=internode

libraries[fontawesome][download][type] = get
libraries[fontawesome][download][url] = https://github.com/FortAwesome/Font-Awesome/archive/v4.1.0.zip

libraries[mailchimp][download][type] = get
libraries[mailchimp][download][url] = http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip

libraries[modernizr][download][type] = get
libraries[modernizr][download][url] = https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip

libraries[Net_SmartIRC][download][type] = get
libraries[Net_SmartIRC][download][url] = http://download.pear.php.net/package/Net_SmartIRC-1.0.2.tgz

libraries[phpsass][download][type] = git
libraries[phpsass][download][url] = https://github.com/Decipher/phpsass.git
libraries[phpsass][download][revision] = eee7cdb42a387db67cec5b4495f56173c50e41c5

libraries[profiler][download][type] = git
libraries[profiler][download][url] = http://git.drupal.org/project/profiler.git
libraries[profiler][download][revision] = 6655a1b490be896c53dceba9a2b887f39461bd08
; Added support for Devel generate - https://drupal.org/node/1420344#comment-5890366
libraries[profiler][patch][] = https://drupal.org/files/devel_generate-1420344-8.patch

libraries[underscore][download][type] = get
libraries[underscore][download][url] = https://github.com/jashkenas/underscore/archive/1.6.0.zip

libraries[vegas][download][type] = get
libraries[vegas][download][url] = https://github.com/jaysalvat/vegas/archive/v1.3.1.zip



; Deprecated

projects[multifield][version] = 1.0-alpha1
