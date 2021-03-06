/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPeopleSuggestionsListener.h>

@class FBAnalytics, NSString;

@interface MNContactsRetrieverSimpleLogger : NSObject <MNPeopleSuggestionsListener> {

	FBAnalytics* _analytics;
	unsigned long long _retrieveStartTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnalytics:(id)arg1 ;
-(void)didStartRetrievingSuggestedContacts;
-(void)didRetrieveContactsInSections:(id)arg1 suggestionResultsInSections:(id)arg2 sectionTitles:(id)arg3 ;
-(void)didAddConversationContact:(id)arg1 atIndexPath:(id)arg2 sectionTitle:(id)arg3 ;
@end

