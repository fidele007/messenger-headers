/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMessengerChatBarMegaphoneController;
@class NSMutableArray;

@interface FBMessengerChatBarMegaphoneManager : NSObject {

	NSMutableArray* _megaphoneControllers;
	double _lastMegaphoneDisplayTime;
	id<FBMessengerChatBarMegaphoneController> _visibleMegaphoneController;

}

@property (nonatomic,__weak,readonly) id<FBMessengerChatBarMegaphoneController> visibleMegaphoneController;              //@synthesize visibleMegaphoneController=_visibleMegaphoneController - In the implementation block
-(void)addMegaphoneController:(id)arg1 ;
-(void)removeMegaphoneController:(id)arg1 ;
-(void)pickMegaphoneController;
-(id<FBMessengerChatBarMegaphoneController>)visibleMegaphoneController;
-(id)init;
@end

