/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBFeedSecondaryActionHandler <NSObject>
@property (nonatomic,copy,readonly) NSString * handlerName; 
@optional
-(id)actionForFeedUnit:(id)arg1 trackingCodes:(id)arg2 context:(id)arg3 actionName:(id)arg4;
-(NSString *)handlerName;

@required
-(id)actionsForFeedUnit:(id)arg1 element:(id)arg2 trackingCodes:(id)arg3 context:(id)arg4;

@end

