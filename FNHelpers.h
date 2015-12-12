/* 
    Copyright (C) 2015 Stephen Oliver <steve@infincia.com>

    This code is distributed under the GNU General Public License, version 2 
    (or at your option any later version).
    
    3rd party libraries may be distributed under an alternate Open Source license.
    
    See the Acknowledgements file included with this code for details.
    
*/

@import Foundation;
@class FNBrowser;


@interface FNHelpers : NSObject

+(NSURL *)findNodeInstallation;
+(BOOL)validateNodeInstallationAtURL:(NSURL *)nodeURL;
+(void)displayNodeMissingAlert;
+(NSArray<FNBrowser *> *)installedWebBrowsers;

@end
