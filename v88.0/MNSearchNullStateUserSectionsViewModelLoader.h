/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>

@protocol OS_dispatch_queue;
@class MNTopPHATContactsRetriever, MNSearchNullStateUserSectionsViewModel, NSObject, NSMutableDictionary, NSString;

@interface MNSearchNullStateUserSectionsViewModelLoader : NSObject <MNSingleViewModelLoading> {

	MNTopPHATContactsRetriever* _topContactsRetriever;
	MNSearchNullStateUserSectionsViewModel* _fetchedViewModel;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requestIdToRequestMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)_hatSectionViewModelFromPHATConversationContacts:(id)arg1 ;
-(id)initWithTopContactsRetriever:(id)arg1 queue:(id)arg2 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end
