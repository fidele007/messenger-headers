/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBBlockStrongRelationDetector : NSObject {

	void* forwarding;
	int flags;
	int size;
	/*function pointer*/void* byref_keep;
	/*function pointer*/void* byref_dispose;
	void** captured[16];
	BOOL _strong;

}

@property (assign,getter=isStrong,nonatomic) BOOL strong;              //@synthesize strong=_strong - In the implementation block
+(id)alloc;
-(oneway void)trueRelease;
-(BOOL)isStrong;
-(void)setStrong:(BOOL)arg1 ;
-(id)retain;
-(oneway void)release;
@end

