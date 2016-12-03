/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetrieverDelegate.h>
#import <Messenger/MNSuggestedContactsRetriever.h>

@protocol MNSuggestedContactsRetriever, FBServiceTransactionMutating, MNSuggestedContactsRetrieverDelegate;
@class FBUserSession, FBDelayer, NSString;

@interface MNLatencyExperimentSuggestedContactsRetriever : NSObject <MNSuggestedContactsRetrieverDelegate, MNSuggestedContactsRetriever> {

	FBUserSession* _session;
	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;
	FBDelayer* _suggestedContactsRetrieverDelegateDelayer;
	id<FBServiceTransactionMutating> _transactionToken;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(id)initWithSuggestedContactsRetriever:(id)arg1 userSession:(id)arg2 ;
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionIndexTitles:(id)arg4 preselectedContacts:(id)arg5 ;
-(void)suggestedContactsRetrieverDidStartLoading:(id)arg1 ;
-(void)suggestedContactsRetrieverDidFinishLoading:(id)arg1 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

