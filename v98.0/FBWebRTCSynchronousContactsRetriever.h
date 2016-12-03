/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNSuggestedContactsRetrieverDelegate.h>

@class FBWebRTCRecentCallerContactsRetriever, NSArray, NSString;

@interface FBWebRTCSynchronousContactsRetriever : NSObject <FBClassProvidable, MNSuggestedContactsRetrieverDelegate> {

	FBWebRTCRecentCallerContactsRetriever* _recentCallerRetriever;
	NSArray* _recentContacts;

}

@property (nonatomic,copy,readonly) NSArray * recentContacts;              //@synthesize recentContacts=_recentContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionIndexTitles:(id)arg4 preselectedContacts:(id)arg5 ;
-(void)suggestedContactsRetrieverDidStartLoading:(id)arg1 ;
-(void)suggestedContactsRetrieverDidFinishLoading:(id)arg1 ;
-(id)initWithRecentContactsRetriever:(id)arg1 ;
-(void)refreshRecentContacts;
-(NSArray *)recentContacts;
-(void)dealloc;
@end
