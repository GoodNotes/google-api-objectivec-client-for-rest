// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Container Analysis API (containeranalysis/v1)
// Description:
//   An implementation of the Grafeas API, which stores, and enables querying
//   and retrieval of critical metadata about all of your software artifacts.
// Documentation:
//   https://cloud.google.com/container-analysis/api/reference/rest/

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

@class GTLRContainerAnalysis_BatchCreateNotesRequest;
@class GTLRContainerAnalysis_BatchCreateOccurrencesRequest;
@class GTLRContainerAnalysis_GetIamPolicyRequest;
@class GTLRContainerAnalysis_Note;
@class GTLRContainerAnalysis_Occurrence;
@class GTLRContainerAnalysis_SetIamPolicyRequest;
@class GTLRContainerAnalysis_TestIamPermissionsRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Container Analysis query classes.
 */
@interface GTLRContainerAnalysisQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates new notes in batch.
 *
 *  Method: containeranalysis.projects.notes.batchCreate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesBatchCreate : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the project in the form of `projects/[PROJECT_ID]`,
 *  under which the notes are to be created.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRContainerAnalysis_BatchCreateNotesResponse.
 *
 *  Creates new notes in batch.
 *
 *  @param object The @c GTLRContainerAnalysis_BatchCreateNotesRequest to
 *    include in the query.
 *  @param parent Required. The name of the project in the form of
 *    `projects/[PROJECT_ID]`, under which the notes are to be created.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesBatchCreate
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_BatchCreateNotesRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a new note.
 *
 *  Method: containeranalysis.projects.notes.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesCreate : GTLRContainerAnalysisQuery

/** Required. The ID to use for this note. */
@property(nonatomic, copy, nullable) NSString *noteId;

/**
 *  Required. The name of the project in the form of `projects/[PROJECT_ID]`,
 *  under which the note is to be created.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRContainerAnalysis_Note.
 *
 *  Creates a new note.
 *
 *  @param object The @c GTLRContainerAnalysis_Note to include in the query.
 *  @param parent Required. The name of the project in the form of
 *    `projects/[PROJECT_ID]`, under which the note is to be created.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesCreate
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Note *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes the specified note.
 *
 *  Method: containeranalysis.projects.notes.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesDelete : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the note in the form of
 *  `projects/[PROVIDER_ID]/notes/[NOTE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRContainerAnalysis_Empty.
 *
 *  Deletes the specified note.
 *
 *  @param name Required. The name of the note in the form of
 *    `projects/[PROVIDER_ID]/notes/[NOTE_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the specified note.
 *
 *  Method: containeranalysis.projects.notes.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesGet : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the note in the form of
 *  `projects/[PROVIDER_ID]/notes/[NOTE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRContainerAnalysis_Note.
 *
 *  Gets the specified note.
 *
 *  @param name Required. The name of the note in the form of
 *    `projects/[PROVIDER_ID]/notes/[NOTE_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a note or an occurrence resource.
 *  Requires `containeranalysis.notes.setIamPolicy` or
 *  `containeranalysis.occurrences.setIamPolicy` permission if the resource is a
 *  note or occurrence, respectively. The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  Method: containeranalysis.projects.notes.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesGetIamPolicy : GTLRContainerAnalysisQuery

/**
 *  REQUIRED: The resource for which the policy is being requested. See the
 *  operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRContainerAnalysis_Policy.
 *
 *  Gets the access control policy for a note or an occurrence resource.
 *  Requires `containeranalysis.notes.setIamPolicy` or
 *  `containeranalysis.occurrences.setIamPolicy` permission if the resource is a
 *  note or occurrence, respectively. The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  @param object The @c GTLRContainerAnalysis_GetIamPolicyRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Lists notes for the specified project.
 *
 *  Method: containeranalysis.projects.notes.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesList : GTLRContainerAnalysisQuery

/** The filter expression. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Number of notes to return in the list. Must be positive. Max allowed page
 *  size is 1000. If not specified, page size defaults to 20.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** Token to provide to skip to a particular spot in the list. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The name of the project to list notes for in the form of
 *  `projects/[PROJECT_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRContainerAnalysis_ListNotesResponse.
 *
 *  Lists notes for the specified project.
 *
 *  @param parent Required. The name of the project to list notes for in the
 *    form of `projects/[PROJECT_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Lists occurrences referencing the specified note. Provider projects can use
 *  this method to get all occurrences across consumer projects referencing the
 *  specified note.
 *
 *  Method: containeranalysis.projects.notes.occurrences.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesOccurrencesList : GTLRContainerAnalysisQuery

/** The filter expression. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Required. The name of the note to list occurrences for in the form of
 *  `projects/[PROVIDER_ID]/notes/[NOTE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Number of occurrences to return in the list. */
@property(nonatomic, assign) NSInteger pageSize;

/** Token to provide to skip to a particular spot in the list. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRContainerAnalysis_ListNoteOccurrencesResponse.
 *
 *  Lists occurrences referencing the specified note. Provider projects can use
 *  this method to get all occurrences across consumer projects referencing the
 *  specified note.
 *
 *  @param name Required. The name of the note to list occurrences for in the
 *    form of `projects/[PROVIDER_ID]/notes/[NOTE_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesOccurrencesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Updates the specified note.
 *
 *  Method: containeranalysis.projects.notes.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesPatch : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the note in the form of
 *  `projects/[PROVIDER_ID]/notes/[NOTE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The fields to update.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRContainerAnalysis_Note.
 *
 *  Updates the specified note.
 *
 *  @param object The @c GTLRContainerAnalysis_Note to include in the query.
 *  @param name Required. The name of the note in the form of
 *    `projects/[PROVIDER_ID]/notes/[NOTE_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesPatch
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Note *)object
                           name:(NSString *)name;

@end

/**
 *  Sets the access control policy on the specified note or occurrence. Requires
 *  `containeranalysis.notes.setIamPolicy` or
 *  `containeranalysis.occurrences.setIamPolicy` permission if the resource is a
 *  note or an occurrence, respectively. The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  Method: containeranalysis.projects.notes.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesSetIamPolicy : GTLRContainerAnalysisQuery

/**
 *  REQUIRED: The resource for which the policy is being specified. See the
 *  operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRContainerAnalysis_Policy.
 *
 *  Sets the access control policy on the specified note or occurrence. Requires
 *  `containeranalysis.notes.setIamPolicy` or
 *  `containeranalysis.occurrences.setIamPolicy` permission if the resource is a
 *  note or an occurrence, respectively. The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  @param object The @c GTLRContainerAnalysis_SetIamPolicyRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns the permissions that a caller has on the specified note or
 *  occurrence. Requires list permission on the project (for example,
 *  `containeranalysis.notes.list`). The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  Method: containeranalysis.projects.notes.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsNotesTestIamPermissions : GTLRContainerAnalysisQuery

/**
 *  REQUIRED: The resource for which the policy detail is being requested. See
 *  the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRContainerAnalysis_TestIamPermissionsResponse.
 *
 *  Returns the permissions that a caller has on the specified note or
 *  occurrence. Requires list permission on the project (for example,
 *  `containeranalysis.notes.list`). The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  @param object The @c GTLRContainerAnalysis_TestIamPermissionsRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsNotesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Creates new occurrences in batch.
 *
 *  Method: containeranalysis.projects.occurrences.batchCreate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesBatchCreate : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the project in the form of `projects/[PROJECT_ID]`,
 *  under which the occurrences are to be created.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRContainerAnalysis_BatchCreateOccurrencesResponse.
 *
 *  Creates new occurrences in batch.
 *
 *  @param object The @c GTLRContainerAnalysis_BatchCreateOccurrencesRequest to
 *    include in the query.
 *  @param parent Required. The name of the project in the form of
 *    `projects/[PROJECT_ID]`, under which the occurrences are to be created.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesBatchCreate
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_BatchCreateOccurrencesRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a new occurrence.
 *
 *  Method: containeranalysis.projects.occurrences.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesCreate : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the project in the form of `projects/[PROJECT_ID]`,
 *  under which the occurrence is to be created.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRContainerAnalysis_Occurrence.
 *
 *  Creates a new occurrence.
 *
 *  @param object The @c GTLRContainerAnalysis_Occurrence to include in the
 *    query.
 *  @param parent Required. The name of the project in the form of
 *    `projects/[PROJECT_ID]`, under which the occurrence is to be created.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesCreate
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Occurrence *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes the specified occurrence. For example, use this method to delete an
 *  occurrence when the occurrence is no longer applicable for the given
 *  resource.
 *
 *  Method: containeranalysis.projects.occurrences.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesDelete : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the occurrence in the form of
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRContainerAnalysis_Empty.
 *
 *  Deletes the specified occurrence. For example, use this method to delete an
 *  occurrence when the occurrence is no longer applicable for the given
 *  resource.
 *
 *  @param name Required. The name of the occurrence in the form of
 *    `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the specified occurrence.
 *
 *  Method: containeranalysis.projects.occurrences.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesGet : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the occurrence in the form of
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRContainerAnalysis_Occurrence.
 *
 *  Gets the specified occurrence.
 *
 *  @param name Required. The name of the occurrence in the form of
 *    `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a note or an occurrence resource.
 *  Requires `containeranalysis.notes.setIamPolicy` or
 *  `containeranalysis.occurrences.setIamPolicy` permission if the resource is a
 *  note or occurrence, respectively. The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  Method: containeranalysis.projects.occurrences.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesGetIamPolicy : GTLRContainerAnalysisQuery

/**
 *  REQUIRED: The resource for which the policy is being requested. See the
 *  operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRContainerAnalysis_Policy.
 *
 *  Gets the access control policy for a note or an occurrence resource.
 *  Requires `containeranalysis.notes.setIamPolicy` or
 *  `containeranalysis.occurrences.setIamPolicy` permission if the resource is a
 *  note or occurrence, respectively. The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  @param object The @c GTLRContainerAnalysis_GetIamPolicyRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Gets the note attached to the specified occurrence. Consumer projects can
 *  use this method to get a note that belongs to a provider project.
 *
 *  Method: containeranalysis.projects.occurrences.getNotes
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesGetNotes : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the occurrence in the form of
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRContainerAnalysis_Note.
 *
 *  Gets the note attached to the specified occurrence. Consumer projects can
 *  use this method to get a note that belongs to a provider project.
 *
 *  @param name Required. The name of the occurrence in the form of
 *    `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesGetNotes
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a summary of the number and severity of occurrences.
 *
 *  Method: containeranalysis.projects.occurrences.getVulnerabilitySummary
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesGetVulnerabilitySummary : GTLRContainerAnalysisQuery

/** The filter expression. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Required. The name of the project to get a vulnerability summary for in the
 *  form of `projects/[PROJECT_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRContainerAnalysis_VulnerabilityOccurrencesSummary.
 *
 *  Gets a summary of the number and severity of occurrences.
 *
 *  @param parent Required. The name of the project to get a vulnerability
 *    summary for in the form of `projects/[PROJECT_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesGetVulnerabilitySummary
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Lists occurrences for the specified project.
 *
 *  Method: containeranalysis.projects.occurrences.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesList : GTLRContainerAnalysisQuery

/** The filter expression. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Number of occurrences to return in the list. Must be positive. Max allowed
 *  page size is 1000. If not specified, page size defaults to 20.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** Token to provide to skip to a particular spot in the list. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The name of the project to list occurrences for in the form of
 *  `projects/[PROJECT_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRContainerAnalysis_ListOccurrencesResponse.
 *
 *  Lists occurrences for the specified project.
 *
 *  @param parent Required. The name of the project to list occurrences for in
 *    the form of `projects/[PROJECT_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates the specified occurrence.
 *
 *  Method: containeranalysis.projects.occurrences.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesPatch : GTLRContainerAnalysisQuery

/**
 *  Required. The name of the occurrence in the form of
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The fields to update.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRContainerAnalysis_Occurrence.
 *
 *  Updates the specified occurrence.
 *
 *  @param object The @c GTLRContainerAnalysis_Occurrence to include in the
 *    query.
 *  @param name Required. The name of the occurrence in the form of
 *    `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]`.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesPatch
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_Occurrence *)object
                           name:(NSString *)name;

@end

/**
 *  Sets the access control policy on the specified note or occurrence. Requires
 *  `containeranalysis.notes.setIamPolicy` or
 *  `containeranalysis.occurrences.setIamPolicy` permission if the resource is a
 *  note or an occurrence, respectively. The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  Method: containeranalysis.projects.occurrences.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesSetIamPolicy : GTLRContainerAnalysisQuery

/**
 *  REQUIRED: The resource for which the policy is being specified. See the
 *  operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRContainerAnalysis_Policy.
 *
 *  Sets the access control policy on the specified note or occurrence. Requires
 *  `containeranalysis.notes.setIamPolicy` or
 *  `containeranalysis.occurrences.setIamPolicy` permission if the resource is a
 *  note or an occurrence, respectively. The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  @param object The @c GTLRContainerAnalysis_SetIamPolicyRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns the permissions that a caller has on the specified note or
 *  occurrence. Requires list permission on the project (for example,
 *  `containeranalysis.notes.list`). The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  Method: containeranalysis.projects.occurrences.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerAnalysisCloudPlatform
 */
@interface GTLRContainerAnalysisQuery_ProjectsOccurrencesTestIamPermissions : GTLRContainerAnalysisQuery

/**
 *  REQUIRED: The resource for which the policy detail is being requested. See
 *  the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRContainerAnalysis_TestIamPermissionsResponse.
 *
 *  Returns the permissions that a caller has on the specified note or
 *  occurrence. Requires list permission on the project (for example,
 *  `containeranalysis.notes.list`). The resource takes the format
 *  `projects/[PROJECT_ID]/notes/[NOTE_ID]` for notes and
 *  `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for occurrences.
 *
 *  @param object The @c GTLRContainerAnalysis_TestIamPermissionsRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRContainerAnalysisQuery_ProjectsOccurrencesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRContainerAnalysis_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
