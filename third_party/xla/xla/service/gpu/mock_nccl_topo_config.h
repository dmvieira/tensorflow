/* Copyright 2023 The OpenXLA Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef XLA_SERVICE_GPU_MOCK_NCCL_TOPO_CONFIG_H_
#define XLA_SERVICE_GPU_MOCK_NCCL_TOPO_CONFIG_H_

namespace xla {
namespace gpu {
// Nccl device topology info generated by the NCCL_TOPO_DUMP_FILE of the Nccl
// library. See
// https://docs.nvidia.com/deeplearning/nccl/user-guide/docs/env.html#nccl-topo-dump-file
// for more details.
// kGCPA3 is for GCP A3 VM.
// kNvidia is for Nvidia A100 VM
const char kGCPA3[] = R"(
<system version="1">
<cpu numaid="0" affinity="0000,00000000,0fffffff,ffffff00,00000000,000fffff,ffffffff" arch="x86_64" vendor="GenuineIntel" familyid="6" modelid="143">
    <pci busid="0000:00:0c.0" class="0x020000" vendor="0x1ae0" device="0x0042" subsystem_vendor="0x1ae0" subsystem_device="0x0058" link_speed="" link_width="0">
      <nic>
        <net name="eth0" dev="0" speed="200000" port="0" latency="0.000000" guid="0x0" maxconn="65536" gdr="0"/>
      </nic>
    </pci>
    <pci busid="0000:02:00.0" class="0x060400" vendor="0x10b5" device="0x8796" subsystem_vendor="0x10b5" subsystem_device="0x8796" link_speed="16.0 GT/s PCIe" link_width="16">
      <pci busid="0000:04:00.0" class="0x030200" vendor="0x10de" device="0x2330" subsystem_vendor="0x10de" subsystem_device="0x16c1" link_speed="16.0 GT/s PCIe" link_width="16">
        <gpu dev="0" sm="90" rank="0" gdr="1">
          <nvlink target="fffffff:ff:ff.0" count="18" tclass="0x068000"/>
        </gpu>
      </pci>
      <pci busid="0000:05:00.0" class="0x030200" vendor="0x10de" device="0x2330" subsystem_vendor="0x10de" subsystem_device="0x16c1" link_speed="16.0 GT/s PCIe" link_width="16">
        <gpu dev="1" sm="90" rank="1" gdr="1">
          <nvlink target="fffffff:ff:ff.0" count="18" tclass="0x068000"/>
        </gpu>
      </pci>
      <pci busid="0000:06:00.0" class="0x020000" vendor="0x1ae0" device="0x0042" subsystem_vendor="0x1ae0" subsystem_device="0x0058" link_speed="16.0 GT/s PCIe" link_width="16">
        <nic>
          <net name="eth1" dev="1" speed="200000" port="0" latency="0.000000" guid="0x1" maxconn="65536" gdr="0"/>
        </nic>
      </pci>
     </pci>
     <pci busid="0000:08:00.0" class="0x060400" vendor="0x10b5" device="0x8796" subsystem_vendor="0x10b5" subsystem_device="0x8796" link_speed="16.0 GT/s PCIe" link_width="16">
      <pci busid="0000:0a:00.0" class="0x030200" vendor="0x10de" device="0x2330" subsystem_vendor="0x10de" subsystem_device="0x16c1" link_speed="16.0 GT/s PCIe" link_width="16">
        <gpu dev="2" sm="90" rank="2" gdr="1">
          <nvlink target="fffffff:ff:ff.0" count="18" tclass="0x068000"/>
        </gpu>
      </pci>
      <pci busid="0000:0b:00.0" class="0x030200" vendor="0x10de" device="0x2330" subsystem_vendor="0x10de" subsystem_device="0x16c1" link_speed="16.0 GT/s PCIe" link_width="16">
        <gpu dev="3" sm="90" rank="3" gdr="1">
          <nvlink target="fffffff:ff:ff.0" count="18" tclass="0x068000"/>
        </gpu>
      </pci>
      <pci busid="0000:0c:00.0" class="0x020000" vendor="0x1ae0" device="0x0042" subsystem_vendor="0x1ae0" subsystem_device="0x0058" link_speed="16.0 GT/s PCIe" link_width="16">
        <nic>
          <net name="eth2" dev="2" speed="200000" port="0" latency="0.000000" guid="0x2" maxconn="65536" gdr="0"/>
        </nic>
      </pci>
     </pci>
     <nic>
        <net name="gke6b9b09baec5" dev="5" speed="10000" port="0" latency="0.000000" guid="0x5" maxconn="65536" gdr="0"/>
        <net name="cilium_host" dev="6" speed="10000" port="0" latency="0.000000" guid="0x6" maxconn="65536" gdr="0"/>
        <net name="cilium_net" dev="7" speed="10000" port="0" latency="0.000000" guid="0x7" maxconn="65536" gdr="0"/>
     </nic>
</cpu>
<cpu numaid="1" affinity="ffff,ffffffff,f0000000,000000ff,ffffffff,fff00000,00000000" arch="x86_64" vendor="GenuineIntel" familyid="6" modelid="143">
    <pci busid="0000:82:00.0" class="0x060400" vendor="0x10b5" device="0x8796" subsystem_vendor="0x10b5" subsystem_device="0x8796" link_speed="16.0 GT/s PCIe" link_width="16">
      <pci busid="0000:84:00.0" class="0x030200" vendor="0x10de" device="0x2330" subsystem_vendor="0x10de" subsystem_device="0x16c1" link_speed="16.0 GT/s PCIe" link_width="16">
        <gpu dev="4" sm="90" rank="4" gdr="1">
          <nvlink target="fffffff:ff:ff.0" count="18" tclass="0x068000"/>
        </gpu>
      </pci>
      <pci busid="0000:85:00.0" class="0x030200" vendor="0x10de" device="0x2330" subsystem_vendor="0x10de" subsystem_device="0x16c1" link_speed="16.0 GT/s PCIe" link_width="16">
        <gpu dev="5" sm="90" rank="5" gdr="1">
          <nvlink target="fffffff:ff:ff.0" count="18" tclass="0x068000"/>
        </gpu>
      </pci>
      <pci busid="0000:86:00.0" class="0x020000" vendor="0x1ae0" device="0x0042" subsystem_vendor="0x1ae0" subsystem_device="0x0058" link_speed="16.0 GT/s PCIe" link_width="16">
        <nic>
          <net name="eth3" dev="3" speed="200000" port="0" latency="0.000000" guid="0x3" maxconn="65536" gdr="0"/>
        </nic>
      </pci>
    </pci>
    <pci busid="0000:88:00.0" class="0x060400" vendor="0x10b5" device="0x8796" subsystem_vendor="0x10b5" subsystem_device="0x8796" link_speed="16.0 GT/s PCIe" link_width="16">
      <pci busid="0000:8a:00.0" class="0x030200" vendor="0x10de" device="0x2330" subsystem_vendor="0x10de" subsystem_device="0x16c1" link_speed="16.0 GT/s PCIe" link_width="16">
        <gpu dev="6" sm="90" rank="6" gdr="1">
          <nvlink target="fffffff:ff:ff.0" count="18" tclass="0x068000"/>
        </gpu>
      </pci>
      <pci busid="0000:8b:00.0" class="0x030200" vendor="0x10de" device="0x2330" subsystem_vendor="0x10de" subsystem_device="0x16c1" link_speed="16.0 GT/s PCIe" link_width="16">
        <gpu dev="7" sm="90" rank="7" gdr="1">
          <nvlink target="fffffff:ff:ff.0" count="18" tclass="0x068000"/>
        </gpu>
      </pci>
      <pci busid="0000:8c:00.0" class="0x020000" vendor="0x1ae0" device="0x0042" subsystem_vendor="0x1ae0" subsystem_device="0x0058" link_speed="16.0 GT/s PCIe" link_width="16">
        <nic>
          <net name="eth4" dev="4" speed="200000" port="0" latency="0.000000" guid="0x4" maxconn="65536" gdr="0"/>
        </nic>
      </pci>
    </pci>
  </cpu>
</system>
)";
const char kNvidia[] = R"(
<system version="1">
  <cpu numaid="3" affinity="00000000,00000000,ffff0000,00000000,00000000,00000000,ffff0000,00000000" arch="x86_64" vendor="AuthenticAMD" familyid="143" modelid="49">
    <pci busid="0000:01:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
      <pci busid="0000:03:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:05:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x10de" subsystem_device="0x13b8" link_speed="16.0 GT/s PCIe" link_width="16">
          <pci busid="0000:07:00.0" class="0x030200" vendor="0x10de" device="0x20b2" subsystem_vendor="0x10de" subsystem_device="0x1463" link_speed="16.0 GT/s PCIe" link_width="16">
            <gpu dev="0" sm="80" rank="0" gdr="1">
              <nvlink target="0000:c7:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c4:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c6:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c9:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c5:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c8:00.0" count="2" tclass="0x068000"/>
            </gpu>
          </pci>
        </pci>
      </pci>
      <pci busid="0000:0a:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:0c:00.0" class="0x020700" vendor="0x15b3" device="0x101b" subsystem_vendor="0x15b3" subsystem_device="0x0007" link_speed="16.0 GT/s PCIe" link_width="16">
          <nic>
            <net name="mlx5_0" dev="0" speed="200000" port="1" latency="0.000000" guid="0xcf70b0003a1420c" maxconn="131072" gdr="1"/>
          </nic>
        </pci>
        <pci busid="0000:0d:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x10de" subsystem_device="0x13b8" link_speed="16.0 GT/s PCIe" link_width="16">
          <pci busid="0000:0f:00.0" class="0x030200" vendor="0x10de" device="0x20b2" subsystem_vendor="0x10de" subsystem_device="0x1463" link_speed="16.0 GT/s PCIe" link_width="16">
            <gpu dev="1" sm="80" rank="1" gdr="1">
              <nvlink target="0000:c7:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c4:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c6:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c9:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c5:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c8:00.0" count="2" tclass="0x068000"/>
            </gpu>
          </pci>
        </pci>
      </pci>
      <pci busid="0000:10:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:12:00.0" class="0x020700" vendor="0x15b3" device="0x101b" subsystem_vendor="0x15b3" subsystem_device="0x0007" link_speed="16.0 GT/s PCIe" link_width="16">
          <nic>
            <net name="mlx5_1" dev="1" speed="200000" port="1" latency="0.000000" guid="0xfcf60b0003a1420c" maxconn="131072" gdr="1"/>
          </nic>
        </pci>
      </pci>
    </pci>
  </cpu>
  <cpu numaid="1" affinity="00000000,00000000,00000000,ffff0000,00000000,00000000,00000000,ffff0000" arch="x86_64" vendor="AuthenticAMD" familyid="143" modelid="49">
    <pci busid="0000:41:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
      <pci busid="0000:43:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:45:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x10de" subsystem_device="0x13b8" link_speed="16.0 GT/s PCIe" link_width="16">
          <pci busid="0000:47:00.0" class="0x030200" vendor="0x10de" device="0x20b2" subsystem_vendor="0x10de" subsystem_device="0x1463" link_speed="16.0 GT/s PCIe" link_width="16">
            <gpu dev="2" sm="80" rank="2" gdr="1">
              <nvlink target="0000:c7:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c4:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c6:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c9:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c5:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c8:00.0" count="2" tclass="0x068000"/>
            </gpu>
          </pci>
        </pci>
      </pci>
      <pci busid="0000:49:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:4b:00.0" class="0x020700" vendor="0x15b3" device="0x101b" subsystem_vendor="0x15b3" subsystem_device="0x0007" link_speed="16.0 GT/s PCIe" link_width="16">
          <nic>
            <net name="mlx5_2" dev="2" speed="200000" port="1" latency="0.000000" guid="0x98f50b0003a1420c" maxconn="131072" gdr="1"/>
          </nic>
        </pci>
        <pci busid="0000:4c:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x10de" subsystem_device="0x13b8" link_speed="16.0 GT/s PCIe" link_width="16">
          <pci busid="0000:4e:00.0" class="0x030200" vendor="0x10de" device="0x20b2" subsystem_vendor="0x10de" subsystem_device="0x1463" link_speed="16.0 GT/s PCIe" link_width="16">
            <gpu dev="3" sm="80" rank="3" gdr="1">
              <nvlink target="0000:c7:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c4:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c6:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c9:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c5:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c8:00.0" count="2" tclass="0x068000"/>
            </gpu>
          </pci>
        </pci>
      </pci>
      <pci busid="0000:50:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:54:00.0" class="0x020700" vendor="0x15b3" device="0x101b" subsystem_vendor="0x15b3" subsystem_device="0x0007" link_speed="16.0 GT/s PCIe" link_width="16">
          <nic>
            <net name="mlx5_3" dev="3" speed="200000" port="1" latency="0.000000" guid="0xf0f60b0003a1420c" maxconn="131072" gdr="1"/>
          </nic>
        </pci>
      </pci>
    </pci>
  </cpu>
  <cpu numaid="7" affinity="ffff0000,00000000,00000000,00000000,ffff0000,00000000,00000000,00000000" arch="x86_64" vendor="AuthenticAMD" familyid="143" modelid="49">
    <pci busid="0000:81:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
      <pci busid="0000:83:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:85:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x10de" subsystem_device="0x13b8" link_speed="16.0 GT/s PCIe" link_width="16">
          <pci busid="0000:87:00.0" class="0x030200" vendor="0x10de" device="0x20b2" subsystem_vendor="0x10de" subsystem_device="0x1463" link_speed="16.0 GT/s PCIe" link_width="16">
            <gpu dev="4" sm="80" rank="4" gdr="1">
              <nvlink target="0000:c7:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c4:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c6:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c9:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c5:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c8:00.0" count="2" tclass="0x068000"/>
            </gpu>
          </pci>
        </pci>
      </pci>
      <pci busid="0000:8b:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:8d:00.0" class="0x020700" vendor="0x15b3" device="0x101b" subsystem_vendor="0x15b3" subsystem_device="0x0007" link_speed="16.0 GT/s PCIe" link_width="16">
          <nic>
            <net name="mlx5_6" dev="4" speed="200000" port="1" latency="0.000000" guid="0xa4f00b0003a1420c" maxconn="131072" gdr="1"/>
          </nic>
        </pci>
        <pci busid="0000:8e:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x10de" subsystem_device="0x13b8" link_speed="16.0 GT/s PCIe" link_width="16">
          <pci busid="0000:90:00.0" class="0x030200" vendor="0x10de" device="0x20b2" subsystem_vendor="0x10de" subsystem_device="0x1463" link_speed="16.0 GT/s PCIe" link_width="16">
            <gpu dev="5" sm="80" rank="5" gdr="1">
              <nvlink target="0000:c7:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c4:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c6:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c9:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c5:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c8:00.0" count="2" tclass="0x068000"/>
            </gpu>
          </pci>
        </pci>
      </pci>
      <pci busid="0000:92:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:94:00.0" class="0x020700" vendor="0x15b3" device="0x101b" subsystem_vendor="0x15b3" subsystem_device="0x0007" link_speed="16.0 GT/s PCIe" link_width="16">
          <nic>
            <net name="mlx5_7" dev="5" speed="200000" port="1" latency="0.000000" guid="0xa0f00b0003a1420c" maxconn="131072" gdr="1"/>
          </nic>
        </pci>
      </pci>
    </pci>
  </cpu>
  <cpu numaid="5" affinity="00000000,ffff0000,00000000,00000000,00000000,ffff0000,00000000,00000000" arch="x86_64" vendor="AuthenticAMD" familyid="143" modelid="49">
    <pci busid="0000:b1:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
      <pci busid="0000:b3:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:b5:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x10de" subsystem_device="0x13b8" link_speed="16.0 GT/s PCIe" link_width="16">
          <pci busid="0000:b7:00.0" class="0x030200" vendor="0x10de" device="0x20b2" subsystem_vendor="0x10de" subsystem_device="0x1463" link_speed="16.0 GT/s PCIe" link_width="16">
            <gpu dev="6" sm="80" rank="6" gdr="1">
              <nvlink target="0000:c7:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c4:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c6:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c9:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c5:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c8:00.0" count="2" tclass="0x068000"/>
            </gpu>
          </pci>
        </pci>
      </pci>
      <pci busid="0000:b8:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:ba:00.0" class="0x020700" vendor="0x15b3" device="0x101b" subsystem_vendor="0x15b3" subsystem_device="0x0007" link_speed="16.0 GT/s PCIe" link_width="16">
          <nic>
            <net name="mlx5_8" dev="6" speed="200000" port="1" latency="0.000000" guid="0x8f80b0003a1420c" maxconn="131072" gdr="1"/>
          </nic>
        </pci>
        <pci busid="0000:bb:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x10de" subsystem_device="0x13b8" link_speed="16.0 GT/s PCIe" link_width="16">
          <pci busid="0000:bd:00.0" class="0x030200" vendor="0x10de" device="0x20b2" subsystem_vendor="0x10de" subsystem_device="0x1463" link_speed="16.0 GT/s PCIe" link_width="16">
            <gpu dev="7" sm="80" rank="7" gdr="1">
              <nvlink target="0000:c7:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c4:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c6:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c9:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c5:00.0" count="2" tclass="0x068000"/>
              <nvlink target="0000:c8:00.0" count="2" tclass="0x068000"/>
            </gpu>
          </pci>
        </pci>
      </pci>
      <pci busid="0000:be:00.0" class="0x060400" vendor="0x1000" device="0xc010" subsystem_vendor="0x1000" subsystem_device="0xa096" link_speed="16.0 GT/s PCIe" link_width="16">
        <pci busid="0000:cc:00.0" class="0x020700" vendor="0x15b3" device="0x101b" subsystem_vendor="0x15b3" subsystem_device="0x0007" link_speed="16.0 GT/s PCIe" link_width="16">
          <nic>
            <net name="mlx5_9" dev="7" speed="200000" port="1" latency="0.000000" guid="0xacf50b0003a1420c" maxconn="131072" gdr="1"/>
          </nic>
        </pci>
      </pci>
    </pci>
  </cpu>
</system>
)";
}  // namespace gpu
}  // namespace xla

#endif  // XLA_SERVICE_GPU_MOCK_NCCL_TOPO_CONFIG_H_
