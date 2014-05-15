core = 7.x
api = 2



; Modules

projects[admin_menu][type] = module
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4

projects[admin_select][type] = module
projects[admin_select][subdir] = contrib
projects[admin_select][download][type] = git
projects[admin_select][download][revision] = 8caa5d52638bac8aa74109c3cc6afea28263b60b

projects[adminimal_admin_menu][type] = module
projects[adminimal_admin_menu][subdir] = contrib
projects[adminimal_admin_menu][version] = 1.5

projects[bot][type] = module
projects[bot][subdir] = contrib
projects[bot][download][type] = git
projects[bot][download][revision] = d0e10c65616f267543e717addc17422979f83bd2
; Allow Net_SmartIRC to be a Library - https://drupal.org/node/1944086#comment-7227558
projects[bot][patch][] = https://drupal.org/files/bot_0.patch
; Add variable module integration - https://drupal.org/node/2264785#comment-8770721
projects[bot][patch][] = https://drupal.org/files/issues/variable_integration-2264785-1.patch

projects[botrules][type] = module
projects[botrules][subdir] = contrib
projects[botrules][version] = 1.0-rc1
; Fixed PARTing of mixed case channels - https://drupal.org/node/2263641#comment-8767617
projects[botrules][patch][] = https://drupal.org/files/issues/part_mixed_case_fix-2263641-1.patch

projects[breakpoints][type] = module
projects[breakpoints][subdir] = contrib
projects[breakpoints][version] = 1.1

projects[coder][type] = module
projects[coder][subdir] = contrib
projects[coder][version] = 2.2

projects[coffee][type] = module
projects[coffee][subdir] = contrib
projects[coffee][version] = 2.2

projects[connector][type] = module
projects[connector][subdir] = contrib
projects[connector][download][type] = git
projects[connector][download][revision] = 46cade3620061a41b3853374dc357f9eaf31829d
; Fix data mapping - https://drupal.org/node/1503258#comment-8596491
projects[connector][patch][] = https://drupal.org/files/issues/fix_map-1503258-13.patch

projects[context][type] = module
projects[context][subdir] = contrib
projects[context][download][type] = git
projects[context][download][revision] = 543c1c157f37a33910dcc1623fc75119c7a70a95
; Fixed context_empty() - http://drupal.org/node/1842566#comment-7269520
projects[context][patch][] = http://drupal.org/files/context_empty-1842566-1.patch
; Fixed active menu trail - https://drupal.org/node/835090#comment-7608141
projects[context][patch][] = https://drupal.org/files/context_menu_fix_2013-07-02_835090_124.patch

projects[context_condition_theme][type] = module
projects[context_condition_theme][subdir] = contrib
projects[context_condition_theme][version] = 1.0

projects[context_module][type] = module
projects[context_module][subdir] = contrib
projects[context_module][download][type] = git
projects[context_module][download][revision] = b7a05aa1299d9286b77f66c539826de9bebde2fb
; Prevent rederict loop - https://drupal.org/node/2076565#comment-7804715
projects[context_module][patch][] = https://drupal.org/files/redirect_loop-2076565-1.patch

projects[context_server_vars][type] = module
projects[context_server_vars][subdir] = contrib
projects[context_server_vars][download][type] = git
projects[context_server_vars][download][revision] = 1d61d973ddb7513de9c3d82b33c8e24c24e907f2

projects[context_variable][type] = module
projects[context_variable][subdir] = contrib
projects[context_variable][download][type] = git
projects[context_variable][download][revision] = 8d611c2ac42c4aaa794f78edee994c3ae5f2f6c6

projects[ctools][type] = module
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.4

projects[custom_formatters][type] = module
projects[custom_formatters][subdir] = contrib
projects[custom_formatters][download][type] = git
projects[custom_formatters][download][revision] = 6463508a3b9dbfb7feb5662b0f6825c9f58c6f60
; Remove Custom Formatters makefile to prevent duplicate downloads - http://drupal.org/node/1721294#comment-6395368
projects[custom_formatters][patch][] = http://drupal.org/files/no_makefile-1721294-1.patch

projects[date][type] = module
projects[date][subdir] = contrib
projects[date][version] = 2.7

projects[devel][type] = module
projects[devel][subdir] = contrib
projects[devel][version] = 1.5

projects[diff][type] = module
projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[dindent][type] = module
projects[dindent][subdir] = contrib
projects[dindent][version] = 1.1

projects[ds][type] = module
projects[ds][subdir] = contrib
projects[ds][version] = 2.6
; Remove Block dependencies - https://drupal.org/node/1635906#comment-7672781
projects[ds][patch][] = https://drupal.org/files/remove_block_dependency-1635906-4.patch

projects[email][type] = module
projects[email][subdir] = contrib
projects[email][version] = 1.3

projects[entity][type] = module
projects[entity][subdir] = contrib
projects[entity][version] = 1.5

projects[entitycache][type] = module
projects[entitycache][subdir] = contrib
projects[entitycache][version] = 1.2

projects[entityform][type] = module
projects[entityform][subdir] = contrib
projects[entityform][version] = 2.0-beta3

projects[entityform_block][type] = module
projects[entityform_block][subdir] = contrib
projects[entityform_block][version] = 1.0
; Fixed undefined index - https://drupal.org/node/2066903#comment-8693015
projects[entityform_block][patch][] = https://drupal.org/files/issues/entityform_block.2066903.undefined_index.8.D7.patch

projects[entityreference][type] = module
projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.1

projects[environment_indicator][type] = module
projects[environment_indicator][subdir] = contrib
projects[environment_indicator][version] = 2.3

projects[features][type] = module
projects[features][subdir] = contrib
projects[features][version] = 2.0
; Cleaner info format - https://drupal.org/comment/8270327#comment-8270327
projects[features][patch][] = https://drupal.org/files/issues/cleaner_info-2155793-1.patch

projects[field_group][type] = module
projects[field_group][subdir] = contrib
projects[field_group][version] = 1.3

projects[fontawesome][type] = module
projects[fontawesome][subdir] = contrib
projects[fontawesome][version] = 1.0

projects[geocoder][type] = module
projects[geocoder][subdir] = contrib
projects[geocoder][version] = 1.2

projects[geofield][type] = module
projects[geofield][subdir] = contrib
projects[geofield][version] = 1.2

projects[geophp][type] = module
projects[geophp][subdir] = contrib
projects[geophp][version] = 1.7

projects[google_analytics][type] = module
projects[google_analytics][subdir] = contrib
projects[google_analytics][download][type] = git
projects[google_analytics][download][revision] = d5c42e145e218cf54397b70bb275484a35d8d5dc
; Allow empty Web Property ID variable - http://drupal.org/node/1964052#comment-7269728
projects[google_analytics][patch][] = http://drupal.org/files/variable_empty_id-1964052-1.patch

projects[gravatar][type] = module
projects[gravatar][subdir] = contrib
projects[gravatar][version] = 1.1

projects[http_client][type] = module
projects[http_client][subdir] = contrib
projects[http_client][version] = 2.4

projects[hacked][type] = module
projects[hacked][subdir] = contrib
projects[hacked][version] = 2.0-beta5

projects[jquery_update][type] = module
projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.4

projects[libraries][type] = module
projects[libraries][subdir] = contrib
projects[libraries][version] = 2.2

projects[link][type] = module
projects[link][subdir] = contrib
projects[link][version] = 1.2

projects[mailchimp][type] = module
projects[mailchimp][subdir] = contrib
projects[mailchimp][version] = 2.12
; Add Subscribe e-mail to list rule - https://drupal.org/node/1909306#comment-7034190
projects[mailchimp][patch][] = https://drupal.org/files/mailchimp_lists_rules_subscribe_email.patch

projects[markdown][type] = module
projects[markdown][subdir] = contrib
projects[markdown][version] = 1.2

projects[metatag][type] = module
projects[metatag][subdir] = contrib
projects[metatag][version] = 1.0-beta9

projects[module_filter][type] = module
projects[module_filter][subdir] = contrib
projects[module_filter][version] = 2.0-alpha2

projects[mollom][type] = module
projects[mollom][subdir] = contrib
projects[mollom][version] = 2.10
; Exportables - https://drupal.org/node/717874#comment-7538947
; projects[mollom][patch][] = https://drupal.org/files/717874-42-exportables_for_mollom.patch

projects[multifield][type] = module
projects[multifield][subdir] = contrib
projects[multifield][version] = 1.0-unstable9

projects[navbar][type] = module
projects[navbar][subdir] = contrib
projects[navbar][version] = 1.4

projects[oauth][type] = module
projects[oauth][subdir] = contrib
projects[oauth][version] = 3.2
; Rules integration - https://drupal.org/node/1248184#comment-8771229
projects[oauth][patch][] = https://drupal.org/files/issues/rules_integration-1248184-2.patch

projects[oauthconnector][type] = module
projects[oauthconnector][subdir] = contrib
projects[oauthconnector][version] = 1.0-beta2
; Add GitHub preset - https://drupal.org/node/1746386#comment-7439784
projects[oauthconnector][patch][] = https://drupal.org/files/oauthconnector-add-github-support-1746386-6.patch
; Fix accept header - https://drupal.org/node/1746386#comment-7861949
projects[oauthconnector][patch][] = https://drupal.org/files/1746386-11-hardcode-json-accept-header.patch

projects[page_title][type] = module
projects[page_title][subdir] = contrib
projects[page_title][version] = 2.7

projects[panels][type] = module
projects[panels][subdir] = contrib
projects[panels][version] = 3.4

projects[pathauto][type] = module
projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[picture][type] = module
projects[picture][subdir] = contrib
projects[picture][version] = 1.2

projects[prepro][type] = module
projects[prepro][subdir] = contrib
projects[prepro][download][type] = git
projects[prepro][download][revision] = 306d6c59e539add57c287c60c53dbe755550dd7a
; Variable integration - http://drupal.org/node/1958564#comment-7269614
projects[prepro][patch][] = http://drupal.org/files/variable_integration-1958564-3.patch

projects[realname][type] = module
projects[realname][subdir] = contrib
projects[realname][version] = 1.2

projects[redirect][type] = module
projects[redirect][subdir] = contrib
projects[redirect][download][type] = git
projects[redirect][download][revision] = ad09f6caa52b371736e24c9e8657f2ce41b876ad
; fix and/or prevent circular redirects - https://drupal.org/node/1796596#comment-7586945
projects[redirect][patch][] = https://drupal.org/files/redirect_loop_detection-1796596-68-reroll.patch
; Merge global redirect functions into Redirect module: https://drupal.org/node/905914#comment-7179456
projects[redirect][patch][] = https://drupal.org/files/redirect-global-905914-130.patch

projects[reroute_email][type] = module
projects[reroute_email][subdir] = contrib
projects[reroute_email][download][type] = git
projects[reroute_email][download][revision] = f2e3878ec1ecba067d7206a4ba98482e6c9d836f
; Variable integration - http://drupal.org/node/1964070#comment-7294928
projects[reroute_email][patch][] = http://drupal.org/files/reroute_email-add-variable-module-integration-1964070-2.patch

projects[rules][type] = module
projects[rules][subdir] = contrib
projects[rules][version] = 2.7

projects[rules_conditional][type] = module
projects[rules_conditional][subdir] = contrib
projects[rules_conditional][version] = 1.0-beta2

projects[sassy][type] = module
projects[sassy][subdir] = contrib
projects[sassy][version] = 2.13
; Fix squish-text mixin - http://drupal.org/node/1539310#comment-7284702
projects[sassy][patch][] = http://drupal.org/files/squish_text-1539310-5.patch

projects[search_krumo][type] = module
projects[search_krumo][subdir] = contrib
projects[search_krumo][version] = 1.5

projects[securesite][type] = module
projects[securesite][subdir] = contrib
projects[securesite][download][type] = git
projects[securesite][download][revision] = bff993c675dbb678c5b9a45e27586a856cc5d30a

projects[semantic_panels][type] = module
projects[semantic_panels][subdir] = contrib
projects[semantic_panels][version] = 1.2

projects[services][type] = module
projects[services][subdir] = contrib
projects[services][version] = 3.7
; Fixed unsigned consumer OAuth - https://drupal.org/node/1526308#comment-8527959
projects[services][patch][] = https://drupal.org/files/issues/1526308-services_oauth-with-multiple-authentication-oauth-fix-2.patch

projects[services_rules][type] = module
projects[services_rules][subdir] = contrib
projects[services_rules][version] = 1.0-beta1
; Remove 'rules_' prefix and add GET requests - https://drupal.org/node/2063819#comment-7765855
projects[services_rules][patch][] = https://drupal.org/files/combo-2063819-2067629-3.patch

projects[site_verify][type] = module
projects[site_verify][subdir] = contrib
projects[site_verify][version] = 1.1

projects[smtp][type] = module
projects[smtp][subdir] = contrib
projects[smtp][version] = 1.0

projects[speedy][type] = module
projects[speedy][subdir] = contrib
projects[speedy][version] = 1.8

projects[stage_file_proxy][type] = module
projects[stage_file_proxy][subdir] = contrib
projects[stage_file_proxy][version] = 1.5
; Add Variable module integration - https://drupal.org/node/2183195#comment-8421499
projects[stage_file_proxy][patch][] = https://drupal.org/files/issues/add_variable_module_integration-2183195-1.patch

projects[strongarm][type] = module
projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[styleguide][type] = module
projects[styleguide][subdir] = contrib
projects[styleguide][version] = 1.1

projects[tabsnomore][type] = module
projects[tabsnomore][subdir] = contrib
projects[tabsnomore][download][type] = git
projects[tabsnomore][download][url] = http://git.drupal.org/sandbox/onkeltem/1730244.git
projects[tabsnomore][download][revision] = 03ab4283ba71220c988362357b79ff1a20daab6a
; Code cleanup - https://drupal.org/comment/8350053#comment-8350053
projects[tabsnomore][patch][] = https://drupal.org/files/issues/cleanup-2168407-2.patch
; Remove hook_node_view_alter() - https://drupal.org/comment/8350061#comment-8350061
projects[tabsnomore][patch][] = https://drupal.org/files/issues/node_view_alter-1784338-2.patch

projects[token][type] = module
projects[token][subdir] = contrib
projects[token][version] = 1.5

projects[variable][type] = module
projects[variable][subdir] = contrib
projects[variable][version] = 2.5

projects[vegas][type] = module
projects[vegas][subdir] = contrib
projects[vegas][version] = 1.0-alpha2
; Add page control - https://drupal.org/node/1929888#comment-8745029
projects[vegas][patch][] = https://drupal.org/files/issues/page_control-1929888-15.patch

projects[views][type] = module
projects[views][subdir] = contrib
projects[views][version] = 3.7

projects[views_bulk_operations][type] = module
projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.2

projects[views_cache_bully][type] = module
projects[views_cache_bully][subdir] = contrib
projects[views_cache_bully][version] = 3.1

projects[which_feature][type] = module
projects[which_feature][subdir] = contrib
projects[which_feature][download][type] = git
projects[which_feature][download][revision] = 3ba19eea51aa288806c2c6f6032bcf6a92291f92

projects[xmlsitemap][type] = module
projects[xmlsitemap][subdir] = contrib
projects[xmlsitemap][version] = 2.0
; Variable module integration - http://drupal.org/node/1989862#comment-7389678
projects[xmlsitemap][patch][] = http://drupal.org/files/variable_integration-1989862-1.patch



; Themes

projects[bootstrap][type] = theme
projects[bootstrap][subdir] = contrib
projects[bootstrap][version] = 3.0



; Libraries

libraries[backbone][download][type] = get
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/1.1.2.zip

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
