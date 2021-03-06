/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface FBFeedInfiniteHScrollComponentController : CKComponentController {

	unsigned long long _currentTailLoadIdentifier;
	unsigned long long _currentHeadLoadIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _numberOfEdges;

}
-(id)initWithComponent:(id)arg1 ;
-(void)didUpdateComponent;
-(void)nearingTailEnd;
-(void)nearingHeadEnd;
-(void)_nearingEndForCursorType:(unsigned long long)arg1 ;
-(void)_processFetchResponse:(id)arg1 component:(id)arg2 cursorType:(unsigned long long)arg3 ;
-(void)didUpdateEdge:(id)arg1 handle:(id)arg2 ;
@end

