/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPagingControllerDelegate <NSObject>
@optional
-(BOOL)pagingController:(id)arg1 shouldBeginPagingGesture:(id)arg2 inDirection:(long long)arg3;
-(void)pagingControllerDidBeginPanning:(id)arg1;
-(void)pagingController:(id)arg1 didAddNodeToPagingRange:(id)arg2;
-(void)pagingController:(id)arg1 didRemoveNodeFromPagingRange:(id)arg2;
-(void)pagingController:(id)arg1 willMoveToNode:(id)arg2;
-(void)pagingController:(id)arg1 didMoveToNode:(id)arg2;
-(void)pagingControllerWillBeginPaging:(id)arg1;
-(void)pagingControllerDidBeginPaging:(id)arg1;
-(void)pagingControllerWillEndPaging:(id)arg1;
-(void)pagingControllerDidEndPaging:(id)arg1;

@end

