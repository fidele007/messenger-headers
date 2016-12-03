/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBLazyCreator : NSObject {

	id _target;
	BOOL _enforcing;
	BOOL _automatic;
	/*^block*/id _creatorBlock;

}

@property (copy) id creatorBlock;               //@synthesize creatorBlock=_creatorBlock - In the implementation block
@property (assign) BOOL enforcing;              //@synthesize enforcing=_enforcing - In the implementation block
@property (assign) BOOL automatic;              //@synthesize automatic=_automatic - In the implementation block
@property (readonly) BOOL created; 
@property (readonly) id target;                 //@synthesize target=_target - In the implementation block
+(id)manualCreatorWithBlock:(/*^block*/id)arg1 ;
+(id)automaticCreatorWithBlock:(/*^block*/id)arg1 ;
+(id)enforcingCreatorWithBlock:(/*^block*/id)arg1 ;
-(id)createNow;
-(id)initWithCreationBlock:(/*^block*/id)arg1 automatic:(BOOL)arg2 enforcing:(BOOL)arg3 ;
-(void)setCreatorBlock:(id)arg1 ;
-(void)setEnforcing:(BOOL)arg1 ;
-(id)creatorBlock;
-(BOOL)automatic;
-(BOOL)enforcing;
-(void)dealloc;
-(id)target;
-(BOOL)created;
-(void)setAutomatic:(BOOL)arg1 ;
@end

