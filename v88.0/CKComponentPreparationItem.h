/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CKComponentLifecycleManager, NSString, NSIndexPath;


@protocol CKComponentPreparationItem <NSObject>
@property (nonatomic,readonly) id<NSObject> replacementModel; 
@property (nonatomic,readonly) CKComponentLifecycleManager * lifecycleManager; 
@property (nonatomic,readonly) CGSize oldSize; 
@property (nonatomic,copy,readonly) NSString * UUID; 
@property (nonatomic,copy,readonly) NSIndexPath * sourceIndexPath; 
@property (nonatomic,copy,readonly) NSIndexPath * destinationIndexPath; 
@property (nonatomic,readonly) unsigned long long changeType; 
@property (getter=isPassthrough,nonatomic,readonly) BOOL passthrough; 
@property (nonatomic,readonly) id<NSObject> context; 
@required
-(CKComponentLifecycleManager *)lifecycleManager;
-(NSIndexPath *)destinationIndexPath;
-(BOOL)isPassthrough;
-(id<NSObject>)replacementModel;
-(id<NSObject>)context;
-(NSString *)UUID;
-(CGSize)oldSize;
-(unsigned long long)changeType;
-(NSIndexPath *)sourceIndexPath;

@end
