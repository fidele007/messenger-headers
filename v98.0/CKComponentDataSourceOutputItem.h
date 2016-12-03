/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponentCommonItemProtocol.h>

@protocol NSObject;
@class CKComponentLifecycleManager, NSString;

@interface CKComponentDataSourceOutputItem : NSObject <CKComponentCommonItemProtocol> {

	CKComponentLifecycleManagerState* _lifecycleManagerState;
	unsigned long long _hash;
	CKComponentLifecycleManager* _lifecycleManager;
	id<NSObject> _model;
	NSString* _UUID;
	CGSize _oldSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKComponentLifecycleManager * lifecycleManager;              //@synthesize lifecycleManager=_lifecycleManager - In the implementation block
@property (nonatomic,readonly) id<NSObject> model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUID;                                        //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) CGSize oldSize;                                              //@synthesize oldSize=_oldSize - In the implementation block
-(CKComponentLifecycleManager *)lifecycleManager;
-(id)scopeRoot;
-(const CKComponentLifecycleManagerState*)lifecycleManagerState;
-(id)initWithLifecycleManager:(id)arg1 lifecycleManagerState:(const CKComponentLifecycleManagerState*)arg2 oldSize:(CGSize)arg3 model:(id)arg4 UUID:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)UUID;
-(const CKComponentLayout*)layout;
-(id<NSObject>)model;
-(CGSize)oldSize;
@end

