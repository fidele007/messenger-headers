/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(BOOL)isStrong;
-(oneway void)trueRelease;
-(void)setStrong:(BOOL)arg1 ;
-(id)retain;
-(oneway void)release;
@end

