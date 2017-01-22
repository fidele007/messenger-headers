/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDialogsParams.h>

@protocol FBOpenGraphAction;
@class NSString, FBAppBridgeScheme;

@interface FBOpenGraphActionParams : FBDialogsParams {

	id<FBOpenGraphAction> _action;
	NSString* _previewPropertyName;
	NSString* _actionType;
	FBAppBridgeScheme* _bridgeScheme;

}

@property (nonatomic,retain) FBAppBridgeScheme * bridgeScheme;              //@synthesize bridgeScheme=_bridgeScheme - In the implementation block
@property (nonatomic,retain) id<FBOpenGraphAction> action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * previewPropertyName;                  //@synthesize previewPropertyName=_previewPropertyName - In the implementation block
@property (nonatomic,copy) NSString * actionType;                           //@synthesize actionType=_actionType - In the implementation block
+(id)methodName;
+(id)getPostedObjectTypeFromObject:(id)arg1 ;
+(id)getIdOrUrlFromObject:(id)arg1 ;
-(NSString *)previewPropertyName;
-(void)setPreviewPropertyName:(NSString *)arg1 ;
-(FBAppBridgeScheme *)bridgeScheme;
-(id)flattenObject:(id)arg1 ;
-(id)flattenGraphObjects:(id)arg1 ;
-(BOOL)containsUIImages:(id)arg1 ;
-(id)initWithAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 ;
-(id)dictionaryMethodArgs;
-(void)setBridgeScheme:(FBAppBridgeScheme *)arg1 ;
-(void)dealloc;
-(id<FBOpenGraphAction>)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id<FBOpenGraphAction>)arg1 ;
-(id)validate;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
@end
