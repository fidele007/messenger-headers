/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSMutableArray, Protocol;

@interface FBDictionaryRegistry : NSObject {

	mutex _mutex;
	/*^block*/id _duplicateHandler;
	NSMutableDictionary* _registeredObjects;
	NSMutableArray* _queuedProviders;
	Protocol* _supportedProtocol;

}

@property (nonatomic,retain) Protocol * supportedProtocol;              //@synthesize supportedProtocol=_supportedProtocol - In the implementation block
-(void)registerObjectProvider:(/*^block*/id)arg1 ;
-(id)scriptMessageHandlerForMessageName:(id)arg1 ;
-(id)surfaceProviderForSurfaceClassName:(id)arg1 ;
-(id)loaderForTarget:(id)arg1 allowDiskCacheResponse:(BOOL)arg2 session:(id)arg3 ;
-(id)initWithDuplicateHandler:(/*^block*/id)arg1 ;
-(id)registrySnapshot;
-(id)actionSequenceForFeedUnit:(id)arg1 element:(id)arg2 trackingCodes:(id)arg3 context:(id)arg4 ;
-(id)viewForPromotion:(id)arg1 frame:(CGRect)arg2 session:(id)arg3 promotionEventHandler:(id)arg4 ;
-(Class)viewClassForPromotion:(id)arg1 ;
-(void)registerHandlerFactoriesProvider:(/*^block*/id)arg1 ;
-(/*^block*/id)handlerFactoryForClass:(Class)arg1 ;
-(void)_evaluateProviders;
-(Protocol *)supportedProtocol;
-(void)setSupportedProtocol:(Protocol *)arg1 ;
-(id)init;
-(void)removeAllObjects;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
@end

