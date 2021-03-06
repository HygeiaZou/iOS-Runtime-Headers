/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPSearchFeedbackListener : NSObject <SFFeedbackListener> {
    NSString * _clientIdentifier;
    BOOL  _didRenderInformationalResults;
    BOOL  _didSuggestQueryForSession;
    BOOL  _isSpotlight;
    _QPSearchFeedbackListenerParameters * _parameters;
    NSString * _prefix;
    NSMutableSet * _remoteQueries;
    NSMutableSet * _silentEngagementCandidates;
    <_DKKnowledgeSaving> * _store;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRenderInformationalResults;
@property (nonatomic) BOOL didSuggestQueryForSession;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isSpotlight;
@property (nonatomic, retain) _QPSearchFeedbackListenerParameters *parameters;
@property (nonatomic, retain) NSString *prefix;
@property (nonatomic, retain) NSMutableSet *remoteQueries;
@property (nonatomic, retain) NSMutableSet *silentEngagementCandidates;
@property (nonatomic, retain) <_DKKnowledgeSaving> *store;
@property (readonly) Class superclass;

+ (id)feedbackListenerWithClientIdentifier:(id)arg1;
+ (id)feedbackListenerWithStore:(id)arg1 clientIdentifier:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_findRemoteMatchingFieldsFromRankedServerResults:(id)arg1;
- (void)_recordQuery:(id)arg1 start:(id)arg2 end:(id)arg3 suggestionType:(unsigned int)arg4 interactionType:(unsigned int)arg5;
- (void)_recordQueryEngagement:(id)arg1 suggestionType:(unsigned int)arg2;
- (BOOL)_resultIsPunchout:(id)arg1;
- (id)clientIdentifier;
- (void)didEngageResult:(id)arg1;
- (void)didRankSections:(id)arg1;
- (BOOL)didRenderInformationalResults;
- (void)didStartSearch:(id)arg1;
- (BOOL)didSuggestQueryForSession;
- (void)evaluateSilentEngagementCandidates;
- (struct _NSRange { unsigned int x1; unsigned int x2; })expandPrefixToLongestRange:(id)arg1 forText:(id)arg2 usingPattern:(id)arg3;
- (id)findQuerySuggestionFromParsecForResult:(id)arg1;
- (void)findSilentEngagementCandidateFromVisibleResults:(id)arg1;
- (BOOL)isSpotlight;
- (id)parameters;
- (id)prefix;
- (void)purgeSilentEngagentCandidates;
- (void)recordCompletedQueryFromLocalResult:(id)arg1 matchingPrefix:(id)arg2 withSuggestionType:(unsigned int)arg3;
- (void)recordQueryCheckParsecCompletions:(id)arg1 withSuggestionType:(unsigned int)arg2;
- (void)recordQueryFromResultEngagement:(id)arg1;
- (void)recordQueryUseCompletedQuery:(id)arg1 withSuggestionType:(unsigned int)arg2;
- (void)recordQueryUsePrefix:(id)arg1 result:(id)arg2 withSuggestionType:(unsigned int)arg3;
- (BOOL)recordQueryWithFullTitle:(id)arg1 whenPrefixMatchesTitle:(id)arg2 withSuggestionType:(unsigned int)arg3;
- (void)recordQueryWithFullTitle:(id)arg1 withSuggestionType:(unsigned int)arg2;
- (id)remoteQueries;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)setDidRenderInformationalResults:(BOOL)arg1;
- (void)setDidSuggestQueryForSession:(BOOL)arg1;
- (void)setIsSpotlight:(BOOL)arg1;
- (void)setParameters:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setRemoteQueries:(id)arg1;
- (void)setSilentEngagementCandidates:(id)arg1;
- (void)setStore:(id)arg1;
- (id)silentEngagementCandidates;
- (id)store;

@end
