// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Text-to-Speech API (texttospeech/v1)
// Description:
//   Synthesizes natural-sounding speech by applying powerful neural network
//   models.
// Documentation:
//   https://cloud.google.com/text-to-speech/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRTexttospeech_ImportDataRequest;
@class GTLRTexttospeech_SynthesizeSpeechRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Texttospeech query classes.
 */
@interface GTLRTexttospeechQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Imports audio+text data for training custom voice.
 *
 *  Method: texttospeech.projects.locations.datasets.import
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTexttospeechCloudPlatform
 *    @c kGTLRAuthScopeTexttospeechDialogflow
 */
@interface GTLRTexttospeechQuery_ProjectsLocationsDatasetsImport : GTLRTexttospeechQuery

/**
 *  The name of the Dataset resource. Format:
 *  `projects/{project}/locations/{location}/datasets/{dataset}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTexttospeech_Operation.
 *
 *  Imports audio+text data for training custom voice.
 *
 *  @param object The @c GTLRTexttospeech_ImportDataRequest to include in the
 *    query.
 *  @param name The name of the Dataset resource. Format:
 *    `projects/{project}/locations/{location}/datasets/{dataset}`
 *
 *  @return GTLRTexttospeechQuery_ProjectsLocationsDatasetsImport
 */
+ (instancetype)queryWithObject:(GTLRTexttospeech_ImportDataRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Synthesizes speech synchronously: receive results after all text input has
 *  been processed.
 *
 *  Method: texttospeech.text.synthesize
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTexttospeechCloudPlatform
 */
@interface GTLRTexttospeechQuery_TextSynthesize : GTLRTexttospeechQuery

/**
 *  Fetches a @c GTLRTexttospeech_SynthesizeSpeechResponse.
 *
 *  Synthesizes speech synchronously: receive results after all text input has
 *  been processed.
 *
 *  @param object The @c GTLRTexttospeech_SynthesizeSpeechRequest to include in
 *    the query.
 *
 *  @return GTLRTexttospeechQuery_TextSynthesize
 */
+ (instancetype)queryWithObject:(GTLRTexttospeech_SynthesizeSpeechRequest *)object;

@end

/**
 *  Returns a list of Voice supported for synthesis.
 *
 *  Method: texttospeech.voices.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTexttospeechCloudPlatform
 */
@interface GTLRTexttospeechQuery_VoicesList : GTLRTexttospeechQuery

/**
 *  Optional. Recommended.
 *  [BCP-47](https://www.rfc-editor.org/rfc/bcp/bcp47.txt) language tag. If not
 *  specified, the API will return all supported voices. If specified, the
 *  ListVoices call will only return voices that can be used to synthesize this
 *  language_code. For example, if you specify `"en-NZ"`, all `"en-NZ"` voices
 *  will be returned. If you specify `"no"`, both `"no-\\*"` (Norwegian) and
 *  `"nb-\\*"` (Norwegian Bokmal) voices will be returned.
 */
@property(nonatomic, copy, nullable) NSString *languageCode;

/**
 *  Fetches a @c GTLRTexttospeech_ListVoicesResponse.
 *
 *  Returns a list of Voice supported for synthesis.
 *
 *  @return GTLRTexttospeechQuery_VoicesList
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
