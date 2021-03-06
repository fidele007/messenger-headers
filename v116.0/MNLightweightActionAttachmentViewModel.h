/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImage, NSString;

@interface MNLightweightActionAttachmentViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _isSentByUser;
	BOOL _isReciprocal;
	BOOL _isOptimisticRender;
	UIImage* _emojiImage;
	double _emojiAngle;
	NSString* _title;
	NSString* _body;
	NSString* _lightweightActionType;
	NSString* _lightweightActionState;
	NSString* _lightweightActionId;

}

@property (nonatomic,copy,readonly) UIImage * emojiImage;                           //@synthesize emojiImage=_emojiImage - In the implementation block
@property (nonatomic,readonly) double emojiAngle;                                   //@synthesize emojiAngle=_emojiAngle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightweightActionType;               //@synthesize lightweightActionType=_lightweightActionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightweightActionState;              //@synthesize lightweightActionState=_lightweightActionState - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightweightActionId;                 //@synthesize lightweightActionId=_lightweightActionId - In the implementation block
@property (nonatomic,readonly) BOOL isSentByUser;                                   //@synthesize isSentByUser=_isSentByUser - In the implementation block
@property (nonatomic,readonly) BOOL isReciprocal;                                   //@synthesize isReciprocal=_isReciprocal - In the implementation block
@property (nonatomic,readonly) BOOL isOptimisticRender;                             //@synthesize isOptimisticRender=_isOptimisticRender - In the implementation block
-(NSString *)lightweightActionType;
-(id)initWithEmojiImage:(id)arg1 emojiAngle:(double)arg2 title:(id)arg3 body:(id)arg4 lightweightActionType:(id)arg5 lightweightActionState:(id)arg6 lightweightActionId:(id)arg7 isSentByUser:(BOOL)arg8 isReciprocal:(BOOL)arg9 isOptimisticRender:(BOOL)arg10 ;
-(UIImage *)emojiImage;
-(double)emojiAngle;
-(NSString *)lightweightActionState;
-(NSString *)lightweightActionId;
-(BOOL)isSentByUser;
-(BOOL)isReciprocal;
-(BOOL)isOptimisticRender;
-(NSString *)title;
-(NSString *)body;
@end

