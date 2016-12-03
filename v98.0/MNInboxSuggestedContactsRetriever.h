/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNSuggestedContactsRetrieverDelegate;
@class MNThreadSummaryCacheThreadListFilterer, MNContactsRetrieverWithThreadSummaries, NSString;

@interface MNInboxSuggestedContactsRetriever : NSObject <MNSuggestedContactsRetriever, FBClassProvidable> {

	MNThreadSummaryCacheThreadListFilterer* _threadListFilterer;
	unsigned long long _requestId;
	MNContactsRetrieverWithThreadSummaries* _retrieverWithThreadSummaries;
	id<MNSuggestedContactsRetrieverDelegate> delegate;
	long long _maxNumberOfContactsToRetrieve;
	NSString* _sectionTitle;

}

@property (assign,nonatomic) long long maxNumberOfContactsToRetrieve;                               //@synthesize maxNumberOfContactsToRetrieve=_maxNumberOfContactsToRetrieve - In the implementation block
@property (nonatomic,copy) NSString * sectionTitle;                                                 //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(void)setMaxNumberOfContactsToRetrieve:(long long)arg1 ;
-(id)initWithThreadListFilterer:(id)arg1 retrieverWithThreadSummaries:(id)arg2 ;
-(void)_didRetrieveContacts:(id)arg1 ;
-(long long)maxNumberOfContactsToRetrieve;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
@end

