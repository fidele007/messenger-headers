/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@class FBUserSession, FBMemFeedback, NSMutableArray;

@interface FBUFIReactionsFacepileAndTextCountsComponentController : CKComponentController {

	FBUserSession* _session;
	FBMemFeedback* _feedback;
	BOOL _loading;
	NSMutableArray* _reactions;
	unsigned long long _selectedIndex;

}
-(void)didUpdateComponent;
-(void)handleComponent:(id)arg1 pan:(id)arg2 ;
-(id)initWithComponent:(id)arg1 ;
-(void)_updateFacepileIfNecessary;
-(void)willMount;
-(void)_toggleViewerReaction;
-(long long)_viewerReactionIndex;
-(void)_downloadCompletionBlockWithReactors:(id)arg1 ;
-(void)_loadData;
@end

