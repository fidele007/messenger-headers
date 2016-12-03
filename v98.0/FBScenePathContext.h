/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBScenePathContextDelegate.h>

@protocol FBScenePathContextDelegate, FBScenePathHolding;
@class NSMapTable;

@interface FBScenePathContext : NSObject <FBScenePathContextDelegate> {

	id<FBScenePathContextDelegate> _delegate;
	id<FBScenePathHolding> _rootView;
	id<FBScenePathHolding> _activeView;
	NSMapTable* _viewToActiveSubPath;

}
-(id)registerView:(id)arg1 withTag:(id)arg2 ;
-(id)registerView:(id)arg1 ;
-(void)updateActiveView:(id)arg1 ;
-(id)initWithRootView:(id)arg1 delegate:(id)arg2 ;
-(float)distanceBetweenChildPath:(unsigned long long)arg1 andSibling:(unsigned long long)arg2 ;
-(void)scenePathContextForView:(id)arg1 didInvalidatePath:(id)arg2 ;
-(void)scenePathContextForView:(id)arg1 didUpdateActivePathTo:(id)arg2 ;
-(void)invalidateView:(id)arg1 ;
@end

