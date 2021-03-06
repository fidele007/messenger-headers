/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class Protocol, FBPluginRegistry;

@interface FBPluginConfiguration : NSObject {

	Protocol* _protocol;
	FBPluginRegistry* _registry;
	/*^block*/id _block;

}

@property (nonatomic,readonly) Protocol * protocol;                      //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) FBPluginRegistry * registry;              //@synthesize registry=_registry - In the implementation block
@property (nonatomic,readonly) id block;                                 //@synthesize block=_block - In the implementation block
-(id)initWithProtocol:(id)arg1 registry:(id)arg2 block:(/*^block*/id)arg3 ;
-(Protocol *)protocol;
-(id)block;
-(NSString*)protocolID;
-(FBPluginRegistry *)registry;
@end

