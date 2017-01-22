/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
