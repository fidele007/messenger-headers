/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAttributionGeneratorDelegateProtocol <NSObject,NSCoding>
@required
-(void)attributionAlreadyHappenedForStoreEntity:(id)arg1 entityLocations:(id)arg2 userSession:(id)arg3;
-(void)attributionDidHappenForStoreEntity:(id)arg1 entityLocations:(id)arg2 pollCount:(int)arg3 userSession:(id)arg4;
-(void)attributionDidFailForStoreEntity:(id)arg1 exception:(id)arg2;
-(void)addToLogExtra:(id)arg1;

@end
