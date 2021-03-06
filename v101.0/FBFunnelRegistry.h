/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBFunnelRegistry : NSObject {

	NSMutableDictionary* _funnelConfigs;

}

@property (nonatomic,copy) NSMutableDictionary * funnelConfigs;              //@synthesize funnelConfigs=_funnelConfigs - In the implementation block
+(id)sharedRegistry;
-(void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(BOOL)arg2 timeout:(double)arg3 ;
-(void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(BOOL)arg2 timeout:(double)arg3 reuseFunnelIfExists:(BOOL)arg4 ;
-(void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(BOOL)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(BOOL)arg4 reuseFunnelIfExists:(BOOL)arg5 ;
-(void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(BOOL)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(BOOL)arg4 ;
-(NSMutableDictionary *)funnelConfigs;
-(id)configForFunnel:(id)arg1 ;
-(id)getFunnelConfigs;
-(void)setFunnelConfigs:(NSMutableDictionary *)arg1 ;
@end

