/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNLightweightActionAttachmentViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _isSentByUser;
	BOOL _isOptimisticRender;
	NSString* _emojiText;
	double _emojiAngle;
	NSString* _title;
	NSString* _body;
	NSString* _lightweightActionType;
	NSString* _lightweightActionState;
	NSString* _lightweightActionId;

}

@property (nonatomic,copy,readonly) NSString * emojiText;                           //@synthesize emojiText=_emojiText - In the implementation block
@property (nonatomic,readonly) double emojiAngle;                                   //@synthesize emojiAngle=_emojiAngle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightweightActionType;               //@synthesize lightweightActionType=_lightweightActionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightweightActionState;              //@synthesize lightweightActionState=_lightweightActionState - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightweightActionId;                 //@synthesize lightweightActionId=_lightweightActionId - In the implementation block
@property (nonatomic,readonly) BOOL isSentByUser;                                   //@synthesize isSentByUser=_isSentByUser - In the implementation block
@property (nonatomic,readonly) BOOL isOptimisticRender;                             //@synthesize isOptimisticRender=_isOptimisticRender - In the implementation block
-(NSString *)lightweightActionType;
-(BOOL)isSentByUser;
-(NSString *)lightweightActionState;
-(NSString *)lightweightActionId;
-(BOOL)isOptimisticRender;
-(NSString *)emojiText;
-(double)emojiAngle;
-(id)initWithEmojiText:(id)arg1 emojiAngle:(double)arg2 title:(id)arg3 body:(id)arg4 lightweightActionType:(id)arg5 lightweightActionState:(id)arg6 lightweightActionId:(id)arg7 isSentByUser:(BOOL)arg8 isOptimisticRender:(BOOL)arg9 ;
-(NSString *)title;
-(NSString *)body;
@end

